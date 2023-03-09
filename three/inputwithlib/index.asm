%include 'victor.inc'

section .data ; 
    len equ 0xA ; 

section .bss ; 
    input resb 0x1 ;

section .text ; 

global _start ; 

_start:
    mov EAX, SYS_READ ;
    mov EBX, STD_IN ;
    mov ECX, input ;
    mov EDX, len ; 
    int SYS_CALL ;

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ;
    int SYS_CALL ;