%include 'vic.inc'

section .data ; 

section .text ; 

global _start ; 

_start:
    lea esi, [BUFFER] ; 
    add esi, 0x9 ; 
    mov byte[esi], 0xA ; 

    dec esi ; 
    mov dl, 0x13 ; 
    add dl, '0' ; 
    mov [esi], dl ; 

    call explaneBuffer ; 

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ; 
    int SYS_CALL ;