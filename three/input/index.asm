section .data ;
    len equ 0xA ; 
section .bss ; 
    input resb 0x1 ; 

section .text ;

global _start ; 

_start: 
    mov eax, 0x3 ; 
    mov ebx, 0x0 ; 
    mov ecx, input ; 
    mov edx, len ; 
    int 0x80 ; 

    mov eax, 0x1 ; 
    mov ebx, 0x0 ; 
    int 0x80 ;
