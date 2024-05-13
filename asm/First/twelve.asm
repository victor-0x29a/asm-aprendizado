segment .data
    LF equ 0xA;
    NULL equ 0xD;
    SYS_CALL equ 0x80;
section .data 
    msg db 'Victao na SITUACAO', LF, NULL
    tam equ $- msg;
section .text;
global _start;
_start:
    mov EAX, 0x4;
    mov EBX, 0x1;
    mov ECX, msg;
    mov EDX, tam;
    int SYS_CALL;

    mov eax, 0x1;
    mov ebx, 0x0;
    int SYS_CALL;
