##### Todo meu aprendizado em Assembly, usando o assembler NASM.

</br>

###### Tabela padrao para segmento de dados

```assembly
    LF equ 0xA ; Line Feed
    NULL equ 0xD ; Final da String
    SYS_EXIT equ 0x1 ; Codigo de chamada para finalizar
    RET_EXIT equ 0x0 ; Operacao com Sucesso
    STD_IN equ 0x0 ; Entrada padrao
    STD_OUT equ 0x1 ; Saida padrao
    SYS_READ equ 0x3 ; Operacao de Leitura
    SYS_WRITE equ 0x4 ; Operacao de Escrita
    SYS_CALL equ 0x80 ; Envia informacao ao SO
```

</br>

###### Condicionais

<ul>
    <li>je = </li>
    <li>jg ></li>
    <li>jge >=</li>
    <li>jl <</li>
    <li>jle <=</li>
    <li>jne !=</li>
</ul>

###### [ ! ] Antes vem a instrucao de comparacao (CMP register, register)

</br>

###### Incondicionais

<ul>
    <li>jmp ...block ; Pula para uma secao</li>
    <li>call ...block ; Chama uma secao e com o ret ele continua o code</li>
</ul>

</br>



[Repositorio do livro do Fernando Anselmo](https://github.com/fernandoans/publicacoes/tree/master/LivroAsm)

[Livro do Frederico Lamberti (Neste repositorio)](/Linguagem Assembly para i386 e x86-64 v0.8.5.pdf)

