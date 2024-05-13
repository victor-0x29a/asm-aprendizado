#include <stdio.h>

int main()
{
    int myList[] = {1, 2};
    for (int i = 0; i < 2; i++)
    {
        int *referenceLocation = &myList[i];
        int referenceValue = *referenceLocation;
        printf("%p = %d\n", referenceLocation, referenceValue);
    }
    return 0;
}