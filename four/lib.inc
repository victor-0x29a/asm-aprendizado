segment .data ; 
    SYS_CALL equ 0x80 ; 
    SYS_WRITE equ 0x4 ;
    STD_OUT equ 0x1 ;  
    SYS_EXIT equ 0x1 ; 
    RET_EXIT equ 0x0 ;
    STD_OUT equ 0x1 ;
    STD_IN equ 0x0 ;
    LF equ 0xA ; 
    NULL equ 0xD ;
    tamBuffer equ 0xA ;

segment .bss ;
    BUFFER resb 0x1 ; 

segment .text ; 

saidaResultado:
    mov EAX, SYS_WRITE ;
    mov EBX, STD_OUT ;
    mov ECX, BUFFER ;
    mov EDX, tamBuffer ;
    int SYS_CALL ;
    ret ;