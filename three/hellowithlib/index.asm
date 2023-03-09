%include 'victor.inc'

section .data ; 
    msg db 'Hello Assembly! v2.0', LF, NULL ; 
    len equ $- msg ; 

section .text ;

global _start ; 

_start:
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ;
    mov ECX, msg ; 
    mov EDX, len ; 
    int SYS_CALL ;

    mov eax, SYS_EXIT ;
    mov ebx, RET_EXIT ; 
    int SYS_CALL ;