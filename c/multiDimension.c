#include <stdio.h>
#include <stdint.h>

void showMultiDimension(int arr[][10])
{
    int size = 10 / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int *base = arr[i];
        int baseSize = (sizeof(base) / sizeof(int));
        for (int j = 0; j < baseSize; j++)
        {
            if (base[j])
            {
                printf("COLUMN: %d, ROW: %d, VALUE: %d, ADDRESS_VALUE: %p\n", i, j, base[j], &base[j]);
            }
        }
    }
}

int showFirstItemFromMultiDimension(int arr[][1])
{
    printf("%d\n", arr[0][0]);
}

int main()
{
    int multi[][10] = {{1}, {0x29a}};
    // showFirstItemFromMultiDimension(multi);
    showMultiDimension(multi);
    return 0;
}