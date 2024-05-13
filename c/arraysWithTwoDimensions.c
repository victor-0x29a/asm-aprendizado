#include <stdio.h>
#include <stdbool.h>

int *populateVector(int vector[], int MAX_POPULATION)
{
    for (int i = 0; i < MAX_POPULATION; i++)
    {
        vector[i] = i;
    }
    return vector;
}

int copyInt(int value)
{
    return value;
}

void checkIfMultidimensionalArrayIsPossible(int matriz[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            matriz[i][k] = 0x29a;
        }
    }
}

int main()
{
    int MAX = 5;

    int vector[MAX];

    int coppiedValue = copyInt(vector[1]);

    populateVector(vector, MAX);

    int afterChangedValue = vector[1];

    if (coppiedValue != afterChangedValue)
    {
        printf("The value was changed\n");
    }

    int matriz[2][2] = {{1, 2}, {2, 4}};

    checkIfMultidimensionalArrayIsPossible(matriz);

    printf("%d\n", matriz[0][0]);

    return 0;
}