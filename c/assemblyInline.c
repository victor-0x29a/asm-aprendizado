#include <stdio.h>

int main()
{
    char s = 's';
    int *ptr = &s;
    __asm__("movl $0x4, %eax;"
            "movl $0x3, %ebx;"
            "movl %0, %ecx;"
            "movl $0x1, %edx;"
            "int $0x80;"
            "movl $0x1, %eax;"
            "movl $0x0, %ebx;"
            "int $0x80;"
            : "r"(s));
}