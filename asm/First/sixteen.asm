segment .data ;
    LF equ 0xA ; 
    NULL equ 0xD ;

section .data ;
    msg db 'Victao nos hello worlddddddddd', LF, NULL ;
    len equ $- msg ;
section .text ;

global _start ;

_start:
    mov eax, 0x4 ;
    mov ebx, 0x1 ;
    mov ecx, msg ; 
    mov edx, len ;
    int 0x80;

    mov eax, 0x1 ;
    mov ebx, 0x0 ; 
    int 0x80
    