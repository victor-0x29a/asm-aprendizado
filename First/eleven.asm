
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
    msg db 'Digite sua idade...', LF, NULL; Null = Final de string, LF = 0x10 = tabela ascii para quebra de linha (\n)
    tam equ $- msg; $- Ponteiro de coleta de tamanho de string;

section .bss
    nome resb 1; Pega de byte em byte

section .text

global _start;

_start:
    ; Mandar a mensagem na tela
    mov EAX, SYS_WRITE; Entrada padrao
    mov EBX, SYS_EXIT;  Saida padrao
    mov ECX, msg; Entrando a mensagem
    mov EDX, tam; Saindo X byte no caso o tamanho da mensagem
    int SYS_CALL; Indicando a finalizacao do programa

    ; Coletar o Dado de entrada do usuario
    mov EAX, SYS_READ; 
    mov EBX, STD_IN;
    mov ECX, nome; Variavel nome que coleta byte por byte
    mov EDX, 0xA; Coletar 10 bytes de entrada
    int SYS_CALL;

    mov eax, SYS_EXIT;
    mov ebx, RET_EXIT;
    int SYS_CALL;