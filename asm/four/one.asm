%include 'lib.inc'

section .data 
    v1 dw '105', LF, NULL ;

section .bss ; 

section .text ;

global _start ; 

_start:
    call converter_valor ;
    call mostrar_valor ;
    
    mov eax, SYS_EXIT ;
    mov ebx, RET_EXIT ;
    int SYS_CALL ;

converter_valor:
    lea esi, [v1] ;
    mov ecx, 0x3 ;
    call string_to_int ;
    add eax, 0x2 ;
    ret ;

mostrar_valor:
    call int_to_string ;

    call saidaResultado ;

    ret ;

; --------------------------
; String para inteiro
; --------------------------
; Entrada ESI (valor para converter) | ECX (tam)
; Saida EAX 
;---------------------------
string_to_int:
    xor ebx, ebx ;
.prox_digito:
    movzx  eax, byte[esi] ; Associacao de registradores (movzx) | Se acontecer em X memoria do registrador, acontece em Y memoria do registrador tambem.
    inc esi ; Incremento o ESI
    sub al, '0' ; Como se incrementar o ESI vai parar no al, decrementamos o 0 
    imul ebx, 0xA ; Multiplica ebx por 0xA (10)
    add ebx, eax ; ebx = ebx * 10 + eax
    loop .prox_digito ; while (--ecx) ou Enquanto houver ecx, repita...
    mov eax, ebx ;
    ret ;

; --------------------------
; Inteiro para string
; --------------------------
; Entrada inteiro em EAX
; Saida BUFFER (valor) ECX | tamBuffer (EDX) 
;---------------------------

int_to_string:
    lea esi, [BUFFER] ; associa uma 'variavel' do bss ao registrador
    add esi, 0x9 ; para ativar
    mov byte[esi], 0xA ; 
    ; Ate agora ESI virou string
    mov ebx, 0xA ;
.prox_digito:
    xor edx, edx ; zero o edx
    div ebx ; dbx tinha 10 ficou dividido
    add dl, '0' ; 
    dec esi ; 
    mov [esi], dl ;
    test eax, eax ;
    jnz .prox_digito ;
    ret



