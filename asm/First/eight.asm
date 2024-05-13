section .data
    msg db 'Praticando', 0xA; 0xA = 10 =  \n (Quebra de linha) na tabela ASCII
    meio db 'assembly', 0xA;
    final db 'caramelo', 0xA 
    tam equ $- msg; 

section .text

global _start;

_start: 
    mov EAX, 0x4; Entrada padrao
    mov EBX, 0x1; Saida padrao
    mov ECX, msg; Entrada da mensagem
    mov EDX, tam; Saida padrao com o tamanho de todas as strings definidas na .data
    int 0x80; OS COMECA AI

    mov eax, 0x1; Indica para comecar o programa na entrada padrao
    mov ebx, 0x0; Indica para finalizar o programa na entrada padrao
    int 0x80; OS COMECA AI