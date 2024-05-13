%include 'newlib.inc'
section .data ;

section .text ;

global _start ; 

_start:
    call myName ; 

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ;
    int SYS_CALL ;