%include 'math.inc' 

section .data ;
    welcomemsg db '|--------- Insira a letra faltante ---------|', LF, NULL ; 
    welcomemsg2 db '|--------- [ *-a-t-h-e-u-s ] ---------|', LF, NULL ;
    len_welcome equ $- welcomemsg ; 

    correctMsg db 'Resposta correta, Letra M', LF, NULL ; 
    lenCorrect equ $- correctMsg ; 

    wrongMsg db 'Resposta incorreta', LF, NULL ; 
    lenWrong equ $- wrongMsg ; 


    LETTER_CORRECT db 'm', NULL ;

section .bss ;

section .text ; 

global _start ; 

welcome:
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ;
    mov ECX, welcomemsg ; 
    mov EDX, len_welcome ;
    int SYS_CALL ;
    ret ; 

_start: 
    call welcome ; 
    call perguntaNome ; 

    lea ESI, [LETTER_CORRECT] ; Referencio a letra correta no ESI 
    lea EDI,  [CHAR] ; REFERENCIO A LETRA DO USUARIO NO CHAR
    mov ECX, 0x1 ; Quantidade de letras que vai ler 

    rep cmpsb ; Compara com o ECX de acordo com o numeros de letras
    je blocoCorreto ; 
   
    mov EAX, SYS_WRITE ; 
    mov EBX, STD_OUT ; 
    mov ECX, wrongMsg ; 
    mov EDX, lenWrong ;
    int SYS_CALL ;
    jmp final ;

    blocoCorreto:
        mov EAX, SYS_WRITE ; 
        mov EBX, STD_OUT ; 
        mov ECX, correctMsg ;
        mov EDX, lenCorrect ; 
        int SYS_CALL ;
        jmp final ;

    final:
        mov eax, SYS_EXIT ; 
        mov ebx, RET_EXIT ; 
        int SYS_CALL ; 
        

; Desafio by EoVictor - Escreva um programa onde pergunte a inicial de X nome, exemplo *atheus; Adivinhe a letra inicial...
