segment .data 
    LF equ 0xA ; 
    NULL equ 0xD ; 
    SYS_CALL equ 0x80 ; 
    RET_EXIT equ 0x0 ; 

    SYS_EXIT equ 0x1 ; 
    SYS_READ equ 0x3 ; 
    SYS_WRITE equ 0x4 ;

    RET_EXIT equ 0x0 ; 
    STD_IN equ 0x0 ;
    STD_OUT equ 0x1 ; 

section .data 
    x dd 90 ;
    y dd 20 ;
    msg db 'X Maior que Y', LF, NULL ;
    tam equ $- msg ;
    msg2 db 'Y Maior que X', LF, NULL ;
    tam2 equ $- msg2 ;

section .text ; 

global _start ;

_start:
    ; Salto condional
    ; je =    jg >    jge >=    jl <    jle <=    jne !=
    mov EAX, DWORD[x] ;
    mov EBX, DWORD[y] ;

    cmp EAX, EBX ;
    jge maior ; 

    mov ECX, msg2 ;
    mov EDX, tam2 ;
    jmp final ;

    maior:
        mov ECX, msg ;
        mov EDX, tam ;
    
    final: 
        mov EAX, SYS_WRITE ;
        mov EBX, STD_OUT ;
        int SYS_CALL ;

        mov EAX, SYS_EXIT ;
        mov EBX, RET_EXIT ;
        int SYS_CALL ;
