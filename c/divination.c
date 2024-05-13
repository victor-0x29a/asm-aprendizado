#include <stdio.h>

void print(char *message)
{
    printf("\n\n%s\n\n", message);
}

int main()
{
    int value = 0x29a;
    int valueByteLength = (int)sizeof(value);

    switch (valueByteLength)
    {
    case 1:
        print("Char");
        break;
    case 2:
        print("Integer 2 bytes");
        break;
    case 4:
        print("Integer 4 bytes");
        break;
    case 8:
        print("Double");
        break;
    case 16:
        print("Long");
        break;

    default:
        print("idk :(");
        break;
    }
    return 0;
}