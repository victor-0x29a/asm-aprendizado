%include 'tenlib.inc'

section .data ;

section .bss ; 

section .text ; 

global _start ;

_start: 
    lea esi, [BUFFER]  ;
    add esi, 0x9 ; 0x9 = 9 - Para ativar
    mov byte[esi], 0xA ; 0xA = 10, convertido para ASCII = \n (quebra de linha)

    dec esi ; 
    mov dl, 0x13 ; 0x13 = C Em Hex ; 
    add dl, '0' ; Incrementando 0, converte HEX to ASCII 
    mov [esi], dl ; Move pra dentro de esi o dl (C) ( 1 byte)

    mov eax, SYS_WRITE ;  Entrada padrao
    mov ebx, STD_OUT ; Saida padrao
    mov ecx, BUFFER ; String entrando para escape
    mov edx, TAM_BUFFER ; Quantia de linha que vai liberar para escape
    int SYS_CALL ; Indicando finalizacao com exito do code

    mov eax, SYS_EXIT ; Entrada padrao 
    mov ebx, RET_EXIT ; Saida padrao 
    int SYS_CALL ; Finalizando instrucao 