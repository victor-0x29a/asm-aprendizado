#include <stdio.h>

int main()
{
    int myNumbers[] = {1, 2, 3, 4, 5};
    printf("\n%d\n", myNumbers[0]);
    myNumbers[0] = 0x29a;
    printf("\n%d\n", myNumbers[0]);

    int emptyArray[5];

    // Populate the array
    emptyArray[0] = 1;

    // Size of array

    printf("\n%lu\n", sizeof(emptyArray)); // 20 bytes because the int is 4 bytes, them 4 * 5 = 20

    printf("\n%lu\n", sizeof(emptyArray) / sizeof(emptyArray[0]));

    // Now, we perform some operations with the array

    int oldPersons[] = {24, 43, 92, 12};
    int oldPersonsLength = sizeof(oldPersons) / sizeof(oldPersons[0]);

    for (int i = 0; i < oldPersonsLength; i++)
    {
        printf("\n%d\n", oldPersons[i]);
    }

    return 0;
}