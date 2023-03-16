section .data
    msg     db      "Hello World!", 0xA
    len     equ     $-msg
section .text
global _start
_start: 
    mov     eax, 4
    mov     ebx, 1
    mov     ecx, msg
    mov     edx, len
    int     0x80
    
    mov     eax, 1
    mov     ebx, 0
    int     0x80
    
;YagoSP 16/03/2023 19:56 (SENAC SALA 18)
;Equivalente - hello.c
