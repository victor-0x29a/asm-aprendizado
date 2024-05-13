segment .data ;
    SYS_CALL equ 0x80 ; 
    SYS_EXIT equ 0x1 ; 
    RET_EXIT equ 0x0 ;
    SYS_WRITE equ 0x4 ; 
    STD_OUT equ 0x1 ; 
    TAM equ 0xA ; 

segment .bss ;
    BUFFER resb 1 ;

segment .text ;

myFunction:
    mov eax, SYS_WRITE ;
    mov ebx, STD_OUT ; 
    mov ecx, BUFFER ; 
    mov edx, TAM ; 
    int SYS_CALL ; 
    ret ; 
    
