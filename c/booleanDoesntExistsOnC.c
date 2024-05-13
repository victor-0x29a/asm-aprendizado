#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool isPaid = false;

    isPaid = true;
    printf("\nIs paid: %d\n", isPaid);

    isPaid = false;
    printf("\nIs paid: %d\n", isPaid);

    /*
        Boolean values doesnt exists on C, but you can use the stdbool.h library to use them

        stdbool.h:

        ```#define true	1
           #define false	0
        ```
    */

    if (isPaid)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}