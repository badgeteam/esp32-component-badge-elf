idf_build_get_property(idf_arch IDF_TARGET_ARCH)
if("${idf_arch}" STREQUAL "riscv")
idf_component_register(
	SRCS
		"src/badge_elf.c"
		"src/kbelfx.c"
		"src/kbelf_lib.c"
		"kbelf/src/port/riscv.c"
		"kbelf/src/kbelf_dyn.c"
		"kbelf/src/kbelf_file.c"
		"kbelf/src/kbelf_inst.c"
		"kbelf/src/kbelf_reloc.c"
		"kbelf/src/kbelf.c"
	INCLUDE_DIRS
		"include"
		"kbelf/include"
	REQUIRES
		"badge-elf-api"
		"freertos"
)
endif()
