#include <stdio.h>

int main()
{
    int hexName[] = {86, 73, 67, 84, 79, 82};

    int nameSize = sizeof(hexName) / sizeof(hexName[0]);

    char parsedName[nameSize + 1];

    for (int i = nameSize; i >= 0; i--)
    {
        parsedName[nameSize - 1 - i] = (char)hexName[i];
    }

    parsedName[nameSize] = '\0';

    printf("Reversed: %s\n", parsedName);

    return 0;
}