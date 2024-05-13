#include <stdio.h>

int calc(int, int);

int main()
{
    int res = calc(2, 2);
    res == 4 ? printf("boa") : printf("vish");
    return 0;
}

int calc(int a, int b)
{
    return a + b;
}