#include <stdio.h>
#include <string.h>

int main()
{
    char charList[7] = "VICTOR";
    int sizeOfString = sizeof(charList[0]);
    int charSize = sizeof(charList) / sizeOfString;
    for (int i = 0; i < charSize; i++)
    {
        // (void *) for fix warning
        int *memoryAddr = (void *)&charList[i];
        // from memory to value
        char value = *memoryAddr;
        printf("\nAddress: %p - Value: %c\n", &memoryAddr, value);
    }
    return 0;
}