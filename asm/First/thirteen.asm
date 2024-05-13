segment .data 
    LF equ 0xA ; 
    NULL equ 0xD ; 
    SYS_CALL equ 0x80 ; 
    RET_EXIT equ 0x0 ; 

    SYS_EXIT equ 0x1 ; 
    SYS_READ equ 0x3 ; 
    SYS_WRITE equ 0x4 ;

    RET_EXIT equ 0x0 ; 
    STD_IN equ 0x0 ;
    STD_OUT equ 0x1 ; 

section .data;
    msg db 'Digite algo ai', LF, NULL;
    tam equ $- msg;
section .bss
    nome resb 1;
section .text;
global _start;
_start:
    mov EAX, SYS_WRITE; 
    mov EBX, SYS_EXIT;
    mov ECX, msg;
    mov EDX, tam;
    int SYS_CALL;

    mov EAX, SYS_READ;
    mov EBX, STD_IN;
    mov ECX, nome;
    mov EDX, 0x10;
    int SYS_CALL;

    mov eax, SYS_EXIT;
    mov ebx, RET_EXIT;
    int SYS_CALL;