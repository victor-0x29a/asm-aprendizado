%include 'expand.inc'

section .data  ;
    msgFinal db 'Seu nome eh ', NULL ;
    lenFinal equ $- msgFinal ; 

section .bss ; 

section .text ;

global _start ; 

sendNameAndYear: 
   mov EAX, SYS_WRITE ;
   mov EBX, STD_OUT ; 
   mov ECX, msgFinal ; 
   mov EDX, lenFinal ;
    int SYS_CALL ;
    ret
    

_start: 
    
    call firstMessage ; 
    mov EAX, SYS_READ ; 
    mov EBX, STD_IN ; 
    mov ECX, name ; 
    mov EDX, lenName ; 
    int SYS_CALL ; 

    call secondMessage ; 

    mov EAX, SYS_READ ; 
    mov EBX, STD_IN ; 
    mov ECX, year ; 
    mov EDX, lenYear ; 
    int SYS_CALL ;

    call sendNameAndYear ;

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ; 
    int SYS_CALL ;
