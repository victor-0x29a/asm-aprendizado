#include <stdio.h>

int main()
{
    char name[] = {'0', 'x', '2', '9', 'a'};

    int nameSize = sizeof(name) / sizeof(name[0]);

    for (int i = 0; i < nameSize; i++)
    {
        (i == (nameSize - 1)) ? printf("%c\n", name[i]) : printf("%c", name[i]);
    }

    return 0;
}