%include 'victor.inc'

section .data ; 
    msg db 'Digite seu nome', LF, NULL ; 
    len equ $- msg ; 

    tamNome equ 0xA ; 

section .bss ; 
    nome resb 0x1 ; 

section .text ; 

global _start ; 

message:
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ; 
    mov ECX, msg ; 
    mov EDX, len ;
    int SYS_CALL ;
    ret ; 

_start:
    call message ; 

    mov EAX, SYS_READ ;
    mov EBX, STD_IN ; 
    mov ECX, nome ;
    mov EDX, tamNome ; 
    int SYS_CALL ; 

    mov eax, SYS_EXIT ;
    mov ebx, RET_EXIT ;
    int SYS_CALL ;
    
