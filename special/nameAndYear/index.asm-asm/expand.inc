segment .data ;
    LF equ 0xA ; 
    NULL equ 0xD ; 
    SYS_CALL equ 0x80 ;
    SYS_EXIT equ 0x1 ;
    RET_EXIT equ 0x0 ; 
    SYS_WRITE equ 0x4 ; 
    SYS_READ equ 0x3 ; 
    STD_OUT equ 0x1 ; 
    STD_IN equ 0x0 ;


    questName db 'Qual seu nome?', LF, NULL ;
    lenQuestName equ $- questName ; 

    questYear db '--------- | | ---------', LF, NULL ;
    questYearTwo db 'Quantos anos vc tem? ', LF, NULL ;
    lenQuestYear equ $- questYear ; 

    lenName equ 0xA ; 
    lenYear equ 0x3 ; 


segment .bss ;
    name resb 0xA ; 
    year resb 0x3 ; 

segment .text ;


firstMessage:
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ; 
    mov ECX, questName ; 
    mov EDX, lenQuestName ; 
    int SYS_CALL ;
    ret ;

secondMessage: 
    mov EAX, SYS_WRITE ;
    mov EBX, STD_OUT ;
    mov ECX, questYear ; 
    mov EDX, lenQuestYear ; 
    int SYS_CALL ; 
    ret ;
