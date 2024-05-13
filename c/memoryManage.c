#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1 = calloc(2, sizeof(float));
    printf("SIZE: %d, ADDRESS: %p\n", (int)sizeof(ptr1), &ptr1);
    ptr1[0] = 3;
    printf("%d", ptr1[0]);
    return 0;
}