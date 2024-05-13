%include 'lib.inc'

section .data ; 

section .text ;

global _start ; 

_start:
    lea esi, [BUFFER]
    add esi, 0x9 
    mov byte[esi], 0xA

    dec esi 
    mov dl, 0x13 ; C 
    add dl, '0' ; 0x13 to letter (C)
    mov [esi], dl ; Finish


    call saidaResultado ; 

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ; 
    int SYS_CALL ;