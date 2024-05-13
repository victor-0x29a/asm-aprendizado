#include <stdio.h>

int main()
{
    int a = 2;
    if (a == 0)
    {
        printf("a is 0\n");
    }
    else if (a == 1)
    {
        printf("a is 1\n");
    }
    else if (a == 2)
    {
        printf("a is 2\n");
    }
    else
    {
        printf("a is not 0, 1 or 2\n");
    }

    a += 1;

    switch (a)
    {
    case 0:
        printf("a is 0\n");
        break;
    case 1:
        printf("a is 1\n");
        break;
    case 2:
        printf("a is 2\n");
        break;
    default:
        printf("a is not 0, 1 or 2\n");
        break;
    }

    int ternary = a > 1 ? 10 : 20;

    printf("\nTernary: %d\n", ternary);

    return 0;
}