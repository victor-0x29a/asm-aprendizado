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

section .data;
    ; DB = 1 BYTE (DEFINE DOUBLE WORD) 
    ; DW =  (DEFINE WORD)
    ; DQ (DEFINE QUAD WORD)
    ; DT (DEFINE TEN WORD)
    x dd 50; 
    y dd 10;
    msg1 db "X eh maior q Y", LF, NULL;
    tam1 equ $- msg1;
    msg2 db "Y eh maior que X", LF, NULL;
    tam2 equ $- msg2;

section .text;

global _start;

_start:
        mov EAX, DWORD[x]; SECAO DATA PRA DENTRO DE REGISTRADOR TEM QUE USAR O DWORD
        mov EBX, DWORD[y];

        ; IF (comparacao)
        cmp EAX, EBX; Isso eh o IF, isso compara um com o outro e n comparando nada
        jge maior; (Se EAX for maior q EBX vai para MAIOR)
            ; Salto condional
            ; je =    jg >    jge >=    jl <    jle <=    jne !=

            ; Salto incondional
            ; jmp (goto)
        mov ECX, msg2;
        mov EDX, tam2;
        jmp final;
    
        maior:
            mov ECX, msg1;
            mov EDX, tam1;
            
        final: 
            mov EAX,  SYS_WRITE;
            mov EBX, STD_OUT;
            int SYS_CALL;

            mov EAX, SYS_EXIT;
            mov EBX, RET_EXIT;
            int SYS_CALL;


