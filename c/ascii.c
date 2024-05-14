#include <stdio.h>

int main()
{
    int name[] = {86, 73, 67, 84, 79, 82};

    int nameSize = sizeof(name) / sizeof(name[0]);

    char parsedName[nameSize];

    for (int i = 0; i < nameSize; i++)
    {
        parsedName[i] = (char)name[i];
    }

    printf("%s\n", parsedName);

    return 0;
}