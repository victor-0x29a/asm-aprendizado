%include 'victor.inc'

section .data ; 
    messageMaior db 'X Maior ou igual a Y', LF, NULL ;
    lenMaior equ $- messageMaior ;

    messageMenor db 'Y Maior que X', LF, NULL ;
    lenMenor equ $- messageMenor ; 

    x dd 0x3 ; 
    y dd 0xA ; 

section .text ; 

global _start ; 

_start:
    mov EAX, DWORD[x] ; 
    mov EBX, DWORD[y] ;

    cmp EAX, EBX ; 
    jge maior ; 

    mov EAX, SYS_WRITE ;
    mov EBX, STD_OUT ; 
    mov ECX, messageMenor ; 
    mov EDX, lenMenor ; 
    int SYS_CALL ;

    jmp final ;

    maior:
        mov EAX, SYS_WRITE ; 
        mov EBX, STD_OUT ; 
        mov ECX, messageMaior ; 
        mov EDX, lenMaior ; 
        int SYS_CALL ; 

    final:
        mov eax, SYS_EXIT ;
        mov ebx, RET_EXIT ;
        int SYS_CALL ;
