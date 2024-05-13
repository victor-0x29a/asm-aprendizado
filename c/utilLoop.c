#include <stdio.h>
#include <stdbool.h>

int getArrSize(int *arr)
{
    int size = sizeof(arr) / sizeof(arr[0]);
    return size;
}

void pushInt(int arr[], int value)
{
    int ArrSize = getArrSize(arr);

    bool IsAdded = false;

    for (int i = 0; i < ArrSize; i++)
    {
        if (!IsAdded && !arr[i])
        {
            arr[i] = value;
            IsAdded = true;
        }
    }
}

void showArr(int arr[])
{
    printf("\n-\n");
    int ArrSize = getArrSize(arr);
    for (int i = 0; i < ArrSize; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int someArr[2] = {1};
    showArr(someArr);
    pushInt(someArr, 20);
    showArr(someArr);

    int someArr2[3] = {1};
    showArr(someArr2);
    pushInt(someArr2, 45);
    showArr(someArr2);

    return 0;
}