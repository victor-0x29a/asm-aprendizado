segment .data ; 
    SYS_CALL equ 0x80 ; 
    SYS_WRITE equ 0x4 ;
    STD_OUT equ 0x1 ;  
    SYS_EXIT equ 0x1 ; 
    RET_EXIT equ 0x0 ;
    TAM_BUFFER equ 0xA ; 

segment .bss ;
    BUFFER resb 0x1 ; 

segment .text ; 

