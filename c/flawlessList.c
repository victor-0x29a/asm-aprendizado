#include <stdlib.h>
#include <stdio.h>

int main()
{
    int const MAX = 4;
    int *ptr = calloc(MAX, sizeof(int));

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = 0x29a;
    }

    for (int i = 0; i < MAX; i++)
    {
        printf("POS: %d, VALUE: %d\n", i, ptr[i]);
    }

    int *ptr2 = calloc(MAX, sizeof(int));

    for (int i = 0; i < MAX; i++)
    {
        ptr2[i] = 65;
    }

    printf("\n\nASCII Convertion:\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("INT: %d, CHAR: %c\n", ptr2[i], (char)ptr2[i]);
    }

    // calloc simulated with malloc

    int *addresses[MAX];

    for (int j = 0; j < MAX; j++)
    {
        addresses[j] = malloc(sizeof(int));
    }

    for (int j = 0; j < MAX; j++)
    {
        printf("ADDRESS: %p\n", &addresses[j]);

        // fill a value

        addresses[j][0] = 0x29a;
    }

    for (int k = 0; k < MAX; k++)
    {
        printf("VALUE: %d\n", *addresses[k]);
    }

    return 0;
}