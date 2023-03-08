segment .data ;
    LF equ 0xA ; 
    NULL equ 0xD ;

    SYS_EXIT equ 0x1 ; 
    RET_EXIT equ 0x0 ;
    SYS_CALL equ 0x80 ; 

    SYS_READ equ 0x3 ;
    SYS_WRITE equ 0x4 ; 
    STD_OUT equ 0x1 ;
    STD_IN equ 0x0 ; 

    LEN_CHAR equ 0x1 ;


segment .bss ;
    CHAR resb 1 ;

segment .text ;

perguntaNome:
    mov EAX, SYS_READ ; 
    mov EBX, STD_IN ;
    mov ECX, CHAR ; 
    mov EDX, LEN_CHAR;
    int SYS_CALL ; 
    ret ;


