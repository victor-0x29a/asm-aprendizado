#include <stdio.h>

int main()
{
    char name[] = "John Doe";
    for (int i = 0; i < 8; i++)
    {
        printf("%c", name[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        if (i == 3)
        {
            printf("\nBroken\n");
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}