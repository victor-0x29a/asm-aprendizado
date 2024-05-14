#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 1;

    int *ptr = malloc(sizeof(int));

    ptr[0] = A;

    printf("VALUE: %d, ADDRESS: %p\n", *ptr, &ptr);

    return 0;
}