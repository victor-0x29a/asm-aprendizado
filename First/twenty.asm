section .data 
    msg db 'bora avancar', 0xA, 0xD ; 
    msg2 db 'de aula ne vei', 0xA, 0xD ;
    len equ $- msg ; 

section .text ; 

global _start ; 

_start: 
    mov eax, 0x4 ; 
    mov ebx, 0x1 ;
    mov ecx, msg ; 
    mov edx, len ; 
    int 0x80 ;

    mov eax, 0x1 ; 
    mov ebx, 0x0 ; 
    int 0x80 ; 