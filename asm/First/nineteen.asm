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
    K dd 0x80 ; 
    Z dd 0x80 ; 

    msg1 db 'K igual a Z', LF, NULL ;
    len1 equ $- msg1 ; 

    msg2 db 'Z nao eh igual a K', LF, NULL ; 
    len2 equ $- msg2 ;  

section .text ; 

global _start ; 

_start: 
    mov EAX, DWORD[K] ; 
    mov EBX, DWORD[Z] ; 

    cmp EAX, EBX ; 
    je maior ; 

    mov ECX, msg2 ; 
    mov EDX, len2 ; 

    jmp igual ; 

    igual: 
        mov ECX, msg1 ; 
        mov EDX, len1 ; 

    final:
        mov EAX, SYS_WRITE; 
        mov EBX, SYS_EXIT;

        int SYS_CALL;

        mov eax, SYS_EXIT ; 
        mov ebx, RET_EXIT ;
        int SYS_CALL ; 


