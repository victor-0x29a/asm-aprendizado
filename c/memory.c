#include <stdio.h>

int main()
{
    int x = 17, y = 10;
    printf("X is localized on %p\n", &x);
    printf("Y is localized on %p\n", &y);

    printf("X as %d\n", x);

    int *ptr = &x;   // convert to memory reference
    int ptr2 = *ptr; // convert the memory reference to value (put the *)
    printf("\n%p\n", ptr);
    printf("\n%d\n", ptr2);
    return 0;
}