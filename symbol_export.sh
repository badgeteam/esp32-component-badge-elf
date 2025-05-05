#!/bin/bash

./symbol_export.py \
    --symbols symbol_export.txt \
    --kbelf src/kbelf_lib.c --kbelf-id badge_elf_lib --kbelf-path libbadge.so \
    --lib libbadge.so --assembler $(find ${IDF_TOOLS_PATH:-../../esp-idf-tools} -name riscv32-esp-elf-cc) -F=-march=rv32imafc_zicsr_zifencei_xesppie -F=-mabi=ilp32f
