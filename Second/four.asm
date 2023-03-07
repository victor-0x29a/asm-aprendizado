%include 'lib.inc'

section .data ;

section .text ; 

global _start ; 

_start: 
    lea esi, [BUFFER] ; Lea para referenciar BUFFER dentro de ESI 
    add esi, 0x9 ; Ativo o ESI com 9 
    mov byte[esi], 0xA ; Movo a quebra de linha pra dentro do byte ESI
    
    dec esi ; Decremento para converter para string e se tornar realmente uma quebra de linha;
    mov dl, 0x13 ;  Movo para dentro de qualquer outro registrador o hexadecimal de alguma letra, no caso 0x13 = C (maiusculo)
    add dl, '0' ; Adiciono 0 para converter hexadecimal para ascii, se eu decrementar inves de adicionar, ele faz o processo reverso, transforma de letra para hexadecimal 
    mov [esi], dl ; Por fim, adiciono o registrador dl para dentro de ESI ; 
    ; Completando a etapa de referenciar 1 letra para dentro de BUFFER 
    
    call saidaResultado ;

    mov eax, SYS_EXIT ;
    mov ebx, RET_EXIT ;
    int SYS_CALL ; 