#include <stdio.h>

void checkRemainder(int a, int b)
{
    if ((a % b) == 0)
    {
        printf("\nExpression: %d / %d\nResult: %d\n", a, b, a / b);
    }
    else
    {
        printf("\nExpression: %d / %d\nRemainder: %f\n", a, b, (float)a / b);
    }
}

int main()
{
    int a = 2;
    int b = 2;

    checkRemainder(a, b);

    checkRemainder(5, 2);

    return 0;
}