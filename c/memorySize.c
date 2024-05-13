#include <stdio.h>

int main()
{
    int x;
    printf("%lu\n", sizeof(x));

    float b;
    printf("%lu\n", sizeof(b));

    char c;
    printf("%lu\n", sizeof(c));

    double d;
    printf("%lu\n", sizeof(d));

    return 0;
}