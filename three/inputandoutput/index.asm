section .data ;
    msg db 'Diga seu nome', 0xA, 0xD ;
    len equ $- msg ; 

    lenInput equ 0xA ; 
 
 section .bss ; 
    nome resb 0x1 ; 

section .text ; 

global _start ; 

_start: 
    ; output message
    mov eax, 0x4 ; 
    mov ebx, 0x1 ; 
    mov ecx, msg ; 
    mov edx, len ; 
    int 0x80 ; 

    ; input 
    mov eax, 0x3 ; 
    mov ebx, 0x0 ; 
    mov ecx, nome ; 
    mov edx, lenInput ; 
    int 0x80 ; 

    mov eax, 0x1 ; 
    mov ebx, 0x0 ;
    int 0x80 ;
