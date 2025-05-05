
// SPDX-License-Identiefier: MIT
// SPDX-CopyRightText: 2025 Julian Scheffers

#include "badge_elf.h"
#include "freertos/FreeRTOS.h"
#include "kbelf.h"

// Trampoline for ELF entrypoint function.
static void entryfunc_trampoline(void* arg) {
    ((void (*)())arg)();
    vTaskDelete(NULL);
}

// Start an ELF-based application.
void badge_elf_start(char const* elf_path) {
    // Load the executable into memory.
    kbelf_dyn dyn = kbelf_dyn_create(0);
    if (!dyn) return;
    if (!kbelf_dyn_set_exec(dyn, elf_path, NULL) || !kbelf_dyn_load(dyn)) {
        kbelf_dyn_destroy(dyn);
        return;
    }

    // Run its constructor array.
    size_t preinit_count = kbelf_dyn_preinit_len(dyn);
    for (size_t i = 0; i < preinit_count; i++) {
        void (*func)() = (void*)kbelf_dyn_preinit_get(dyn, i);
        func();
    }
    size_t init_count = kbelf_dyn_init_len(dyn);
    for (size_t i = 0; i < init_count; i++) {
        void (*func)() = (void*)kbelf_dyn_init_get(dyn, i);
        func();
    }

    // Run the entry function in a new thread.
    TaskHandle_t handle;
    xTaskCreate(entryfunc_trampoline, elf_path, 8192, (void*)kbelf_dyn_entrypoint(dyn), 20, &handle);
}
