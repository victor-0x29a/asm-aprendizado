%include 'lib.inc'

section .text ;

global _start ;

_start:     
    lea esi, [BUFFER]; Load Effect Address (leia um endereco efetivo) (associa um endereco de memoria la do bss com um registrador aqui) (TUDO QUE EU MANDAR PRO ESI, TO MANDANDO PRO BUFFER)
    add esi, 0x9 ; Iniciar o ESI 
    mov byte[esi], 0xA ; Move pra dentro do byte de esi o 10 (0xA)

    dec esi ; 
    mov dl, 0x13 ; 0x13- C Maiusculo
    add dl, '0' ; Converto o 0x13 para C (Se for desconverter, basta subtrair)

    mov [esi], dl ; 
    
    dec esi ; 
    mov dl, 0x12 ; 0x12- B Maiusculo
    add dl, '0' ; Converto o 0x12 para B (Se for desconverter, basta subtrair)

    mov [esi], dl ; 

    dec esi ; 
    mov dl, 0x11 ; 0x11 - A Maiuscula
    add dl, '0' ; Converto o 0x11 para A (Se for desconverter, basta subtrair)

    mov [esi], dl ; 

    call saidaResultado ; 

    mov eax, SYS_EXIT ; 
    mov ebx, RET_EXIT ; 
    int SYS_CALL ;
