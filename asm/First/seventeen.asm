segment .data ; 
    LF equ 0xA ; 
    NULL equ 0xD ;

    SYS_WRITE equ 0x4 ; 
    SYS_CALL equ 0x80 ; 
    

section .data ;
    victor dd 17 ; 
    caramelo dd 1 ;

    msg1 db 'victor > caramelo (idade)', LF, NULL ;
    len1 equ $- msg1 ; 

    msg2 db 'caramelo > victor (idade)', LF, NULL ; 
    len2 equ $- msg2 ;

section .text ;

global _start ;

_start: 
    mov EAX, DWORD[victor] ; 
    mov EBX, DWORD[caramelo] ; 

    cmp EAX, EBX ; 
    jge maior ; 

    mov ECX, msg2 ; 
    mov EDX, len2 ; 

    jmp final ; 

    maior: 
        mov ECX, msg1 ; 
        mov EDX, len1 ; 
    
    final:
        mov EAX, SYS_WRITE ;
        mov EBX, 0x1 ; 
        int SYS_CALL ; 

        mov eax, 0x1 ;
        mov ebx, 0x0 ;
        int SYS_CALL ; 
        

