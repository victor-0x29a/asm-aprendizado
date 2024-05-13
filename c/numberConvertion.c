#include <stdio.h>

int main()
{
    int a = 5;
    int sppliter = 2;

    printf("\n%d\n", a / sppliter);

    // Automatic convertion
    float top = 1;

    printf("\nReturned: %f\nExpected: %1.f\n", top, top);

    // Explicit convertion
    float top2 = (float)5 / 2;
    printf("\nReturned: %f\n", top2);

    char asciiLetter = (char)65;
    printf("\nReturned: %c\n", asciiLetter);

    return 0;
}