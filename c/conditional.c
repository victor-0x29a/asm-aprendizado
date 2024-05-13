#include <stdio.h>

int check(int a, int b)
{
    if (a == b)
    {
        printf("a is equal to b\n");
    }
    else
    {
        printf("a is not equal to b\n");
    }
}

int main()
{
    int a = 0, b = 1;
    check(a, b);

    a = 1;

    check(a, b);
    return 0;
}