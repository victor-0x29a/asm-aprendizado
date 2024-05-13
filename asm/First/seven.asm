section .data
    msg db 'Comeca aqui a interpretacao do tam MSG', 0xA ; Faco uma referencia (nao eh uma variavel) ao valor 'Victor', concatenando o valor 10 em hexadecimal que se refere a quebra de linha na tabela ascii
    msgC db 'e termina aqui', 0xA ; Continuacao
    tam equ $- msg ; Coleto o tamanho dessa referencia de texto com ponteiro $- e faco uma comparacao
section .text

global _start;

_start:
    mov EAX, 0x4; Entrada padrao
    mov EBX, 0x1; Saida padrao
    mov ECX, msg; Filho de EAX, entrada padrao, move a mensagem nele
    mov EDX, tam; Filho de EDX, saida padrao, move o tamanho no proprio, se eu mover outro valor sem ser o valor do tamanho real da string, por exemplo um 0x2, so vai sair 'Vi', pois estou utilizando somente uma saida pre-definida de escape.
    int 0x80; Finaliza o programa e executa

    mov eax, 0x1; Entrada padrao
    mov ebx, 0x0; Saida padrao
    int 0x80; Finaliza o programa e executa
