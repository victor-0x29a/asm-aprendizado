
segment .data 
    SYS_WRITE equ 0x4 ; 
    STD_OUT equ 0x1 ;

    SYS_EXIT equ 0x1 ;
    RET_EXIT equ 0x0 ; 

    SYS_CALL equ 0x80 ;


    msg db 'Meu nome eh Victor', 0xA, 0xD ;
    len equ $- msg ;

segment .text

myName:
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ; 
    mov ECX, msg ; 
    mov EDX, len ; 
    int SYS_CALL ;
    ret ; 
