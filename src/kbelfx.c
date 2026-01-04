// SPDX-License-Identiefier: MIT
// SPDX-CopyRightText: 2025 Julian Scheffers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "kbelf.h"

static char const TAG[] = "kbelfx";

// Measure the length of `str`.
size_t kbelfq_strlen(char const* str) {
    return strlen(str);
}

// Copy string from `src` to `dst`.
void kbelfq_strcpy(char* dst, char const* src) {
    strcpy(dst, src);
}

// Find last occurrance of `c` in `str`.
char const* kbelfq_strrchr(char const* str, char c) {
    return strrchr(str, c);
}

// Compare string `a` to `b`.
bool kbelfq_streq(char const* a, char const* b) {
    return !strcmp(a, b);
}

// Copy memory from `src` to `dst`.
void kbelfq_memcpy(void* dst, void const* src, size_t nmemb) {
    memcpy(dst, src, nmemb);
}

// Fill memory `dst` with `c`.
void kbelfq_memset(void* dst, uint8_t c, size_t nmemb) {
    memset(dst, c, nmemb);
}

// Compare memory `a` to `b`.
bool kbelfq_memeq(void const* a, void const* b, size_t nmemb) {
    return !memcmp(a, b, nmemb);
}

// Memory allocator function to use for allocating metadata.
// User-defined.
void* kbelfx_malloc(size_t len) {
    // For larger allocations, prefer SPIRAM to preserve internal RAM
    if (len > 1024) {
        void* mem = heap_caps_malloc(len, MALLOC_CAP_SPIRAM);
        if (mem) return mem;
    }
    return malloc(len);
}

// Memory allocator function to use for allocating metadata.
// User-defined.
void* kbelfx_realloc(void* mem, size_t len) {
    // Just use standard realloc - heap_caps_realloc can be tricky with
    // memory that was allocated from a different heap capability
    return realloc(mem, len);
}

// Memory allocator function to use for allocating metadata.
// User-defined.
void kbelfx_free(void* mem) {
    free(mem);
}

// Memory allocator function to use for loading program segments.
// Takes a segment with requested address and permissions and returns a segment with physical and virtual address
// information. Returns success status. User-defined.
bool kbelfx_seg_alloc(kbelf_inst inst, size_t segs_len, kbelf_segment* segs) {
    // Determine memory requirements.
    size_t min_va = SIZE_MAX, max_va = 0, min_align = 16;
    for (size_t i = 0; i < segs_len; i++) {
        if (min_align < segs[i].alignment) min_align = segs[i].alignment;
        if (min_va > segs[i].vaddr_req) min_va = segs[i].vaddr_req;
        if (max_va < segs[i].vaddr_req + segs[i].size) max_va = segs[i].vaddr_req + segs[i].size;
    }

    size_t alloc_size = max_va - min_va;

    // Memory debugging (commented out)
    // size_t internal_before = heap_caps_get_free_size(MALLOC_CAP_INTERNAL);
    // ESP_LOGI(TAG, "seg_alloc: requesting %u bytes, internal heap before: %u",
    //          (unsigned)alloc_size, (unsigned)internal_before);

    // ELF segments contain executable code - must be in executable memory (internal RAM),
    // NOT SPIRAM which is not executable on ESP32-P4.
    void* memory = aligned_alloc(min_align, alloc_size);

    if (!memory) {
        ESP_LOGE(TAG, "seg_alloc: FAILED to allocate %u bytes", (unsigned)alloc_size);
        return false;
    }
    segs[0].alloc_cookie = memory;

    // Memory debugging (commented out)
    // size_t internal_after = heap_caps_get_free_size(MALLOC_CAP_INTERNAL);
    // ESP_LOGI(TAG, "seg_alloc: allocated %u bytes at %p, internal used: %u (before: %u, after: %u)",
    //          (unsigned)alloc_size, memory,
    //          (unsigned)(internal_before - internal_after),
    //          (unsigned)internal_before, (unsigned)internal_after);

    // Update actual virtual address fields.
    size_t offset = (size_t)memory - min_va;
    for (size_t i = 0; i < segs_len; i++) {
        segs[i].laddr = segs[i].vaddr_real = segs[i].vaddr_req + offset;
    }

    return true;
}

// Memory allocator function to use for loading program segments.
// Takes a previously allocated segment and unloads it.
// User-defined.
void kbelfx_seg_free(kbelf_inst inst, size_t segs_len, kbelf_segment* segs) {
    (void)inst;
    (void)segs_len;
    void* cookie = segs[0].alloc_cookie;

    // Memory debugging (commented out)
    // size_t internal_before = heap_caps_get_free_size(MALLOC_CAP_INTERNAL);
    // ESP_LOGI(TAG, "seg_free: freeing memory at %p, internal heap before: %u",
    //          cookie, (unsigned)internal_before);

    free(cookie);

    // Memory debugging (commented out)
    // size_t internal_after = heap_caps_get_free_size(MALLOC_CAP_INTERNAL);
    // ESP_LOGI(TAG, "seg_free: done, internal freed: %u (before: %u, after: %u)",
    //          (unsigned)(internal_after - internal_before),
    //          (unsigned)internal_before, (unsigned)internal_after);
}

// Open a binary file for reading.
// User-defined.
void* kbelfx_open(char const* path) {
    return fopen(path, "rb");
}

// Close a file.
// User-defined.
void kbelfx_close(void* fd) {
    fclose(fd);
}

// Reads a number of bytes from a file.
// Returns the number of bytes read, or less than that on error.
// User-defined.
long kbelfx_read(void* fd, void* buf, long buf_len) {
    return fread(buf, 1, buf_len, fd);
}

// Reads a number of bytes from a file to a load address in the program.
// Returns the number of bytes read, or less than that on error.
// User-defined.
long kbelfx_load(kbelf_inst inst, void* fd, kbelf_laddr laddr, kbelf_laddr file_size, kbelf_laddr mem_size) {
    (void)inst;
    ESP_LOGI(TAG, "Loading 0x%x bytes from 0x%x to %p", (int)file_size, (int)ftell(fd), (void*)laddr);
    memset((void*)(laddr + file_size), 0, mem_size - file_size);
    return fread((void*)laddr, 1, file_size, fd);
}

// Sets the absolute offset in the file.
// Returns 0 on success, -1 on error.
// User-defined.
int kbelfx_seek(void* fd, long pos) {
    return fseek(fd, pos, SEEK_SET);
}

// Read bytes from a load address in the program.
bool kbelfx_copy_from_user(kbelf_inst inst, void* buf, kbelf_laddr laddr, size_t len) {
    (void)inst;
    memcpy(buf, (void const*)laddr, len);
    return true;
}

// Write bytes to a load address in the program.
bool kbelfx_copy_to_user(kbelf_inst inst, kbelf_laddr laddr, void* buf, size_t len) {
    (void)inst;
    memcpy((void*)laddr, buf, len);
    return true;
}

// Get string length from a load address in the program.
ptrdiff_t kbelfx_strlen_from_user(kbelf_inst inst, kbelf_laddr laddr) {
    (void)inst;
    return (ptrdiff_t)strlen((char const*)laddr);
}

// Find and open a dynamic library file.
// Returns non-null on success, NULL on error.
// User-defined.
kbelf_file kbelfx_find_lib(char const* needed) {
    return kbelf_file_open(needed, NULL);
}

extern kbelf_builtin_lib const badge_elf_lib_badge;
extern kbelf_builtin_lib const badge_elf_lib_c;
extern kbelf_builtin_lib const badge_elf_lib_gcc;
extern kbelf_builtin_lib const badge_elf_lib_m;
extern kbelf_builtin_lib const badge_elf_lib_pax_gfx;
extern kbelf_builtin_lib const badge_elf_lib_pax_codecs;
extern kbelf_builtin_lib const badge_elf_lib_pthread;

// Array of built-in libraries.
// Optional user-defined.
kbelf_builtin_lib const* kbelfx_builtin_libs[] = {
    &badge_elf_lib_badge, &badge_elf_lib_c,       &badge_elf_lib_gcc,
    &badge_elf_lib_m,     &badge_elf_lib_pax_gfx, &badge_elf_lib_pax_codecs, &badge_elf_lib_pthread,
};

// Number of built-in libraries.
// Optional user-defined.
size_t kbelfx_builtin_libs_len = sizeof(kbelfx_builtin_libs) / sizeof(void*);
