#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char charList[50] = "VICTOR";
    printf("%s has %d characteres!\n", charList, (int)strlen(charList));

    printf("Now, with 'sizeof' has %lu\n", sizeof(charList));

    char hello[12] = "Hello";
    char World[] = "World";
    strcat(hello, World);

    if (strcmp(hello, "HelloWorld") != false)
    {
        printf("Is different");
    }

    char original[3] = "opa";
    char fake[3];

    strcpy(original, fake);

    if (strcmp(original, fake) == false)
    {
        printf("Fake is realist\n");
    }

    return 0;
}