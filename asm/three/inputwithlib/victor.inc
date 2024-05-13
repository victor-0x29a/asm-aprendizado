segment .data ;
    SYS_CALL equ 0x80 ;
    SYS_WRITE equ 0x4 ;
    SYS_READ equ 0x3 ; 
    STD_OUT equ 0x1 ;
    STD_IN equ 0x0 ; 
    SYS_EXIT equ 0x1 ; 
    RET_EXIT equ 0x0 ; 

    LF equ 0xA ; 
    NULL equ 0xD ;

segment .bss ;

segment .text ;