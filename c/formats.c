#include <stdio.h>

// Use %c to print a character
// Use %d to print an integer
// use %f to print a float

int main()
{
    int var = 5;
    printf("Base num: %d", var);
    printf("\n%d x 2 = %d\n", var, var * 2);
    char letter = 'v';
    printf("%c is my bf char :)\n", letter);
    float num = 5.5;
    printf("%f is a float\n", num);
    num = 5.6;
    printf("%f is a changed float\n", num);
    return 0;
}