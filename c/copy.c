#include <stdio.h>

int main()
{
    int var = 5;
    printf("\n%d\n", var);
    int varCopy = var;
    var = 6;
    printf("\n%d\n", varCopy);
    printf("\n%d\n", var);
    return 0;
    /*
    output:
        5

        5

        6
    */

    // The value of var is copied to varCopy, so changing var does not affect varCopy
}