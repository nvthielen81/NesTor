bits 32
global _start
extern terminal_init
extern main


section .text

    align 4
    dd 0x1BADB002
    dd 0x00
    dd - (0x1BADB002 + 0x00)

_start:
    mov esp , stack
    call terminal_init
    call main
    hlt

section .bss
    resb 8192
    stack:

