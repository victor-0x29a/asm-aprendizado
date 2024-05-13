segment .data
    LF equ 0xA ; Line Feed
    NULL equ 0xD ; Nulo, final de string 
    SYS_CALL equ 0x80 ; Envia informacao ao SO
    RET_EXIT equ 0x0 ; Operacao realizada com sucesso
    ; Sao mandados para EAX
    SYS_EXIT equ 0x1 ; Codigo de chamada para finalizar o programa
    SYS_READ equ 0x3 ; Operacao de leitura
    SYS_WRITE equ 0x4 ; Operacao de escrita
    ; Sao mandados para EBX
    RET_EXIT equ 0x0 ; Operacao realizada com sucesso
    STD_IN equ 0x0 ; Entrada padrao
    STD_OUT equ 0x1 ; Saida padrao



section .data
    msg db "Entre com seu nome", LF, NULL;
    tam db $- msg;

section .bss
    ; Nossas "Variaveis" (Coisas que modificam)
    nome resb 1; Armazena valor de byte em byte (N se preocupe com o tamanho)

section .text

global _start;
_start:
    mov EAX, SYS_WRITE;
    mov EBX, STD_OUT;

    mov ECX, msg;
    mov EDX, tam;
    
    int SYS_CALL


    mov EAX, SYS_READ; 0x3 inves de 0x4, indicando uma entrada
    mov EBX, STD_IN; 0x0 inves de 0x1

    mov ECX, nome; resb 1 de byte em byte
    mov EDX, 0xA; 0xA = 10, assembly vai pegar 10 bytes de quais entraram no nome, se tiver 20 caracter ele so vai buscar 10 e acabou
    
    int SYS_CALL

    mov eax, SYS_EXIT;
    mov ebx, RET_EXIT;

    int SYS_CALL;
