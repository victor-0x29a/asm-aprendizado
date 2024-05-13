section .data
    msg db 'Eae whate mano', 0xA;
    msgA db 'dboa vei?', 0xA;
    msgB db 'agora peguei firme assembly', 0xA
    tam equ $- msg;

section .text

global _start;

_start: 
    mov EAX, 0x4; Entrada padrao
    mov EBX, 0x1; Saida padrao
    mov ECX, msg; Mensagem como entrada
    mov EDX, tam; Tamanho de escapa da mensagem
    int 0x80; Finaliza ai
    mov eax, 0x1; 
    mov ebx, 0x0;
    int 0x80; Finaliza ai
