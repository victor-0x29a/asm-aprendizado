#include <stdio.h>

int main()
{
    int b = 300;
    printf("\nStarted\n");
    while (b > 1)
    {
        b--;
    }
    printf("\nStopped\n");

    do
    {
        b++;
    } while (b < 300);

    return 0;
}