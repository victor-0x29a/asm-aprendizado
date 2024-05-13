#include <stdio.h>
#include <stdbool.h>

void error(char *error)
{
    printf("\n\n%s\n\n", error);
}

void print(char *message)
{
    printf("\n%s: ", message);
}

void showTable(int base, int max)
{
    int i = 0;
    while (i < max)
    {
        i++;
        printf("%d x %i = %d\n", base, i, base * i);
    }
}

int main()
{
    bool isActiveQuests = true;
    while (isActiveQuests)
    {
        print("Numero a base da tabuada (1 - 9)");

        int choiced;
        scanf("%d", &choiced);

        if (choiced > 9)
        {
            error("Deve ser menor ou igual a 9");
            continue;
        }

        if (choiced < 1)
        {
            error("Deve ser maior ou igual a 1");
            continue;
        }

        print("Limite (1 - 120)");
        int LIMIT;
        scanf("%d", &LIMIT);

        if (LIMIT < 1)
        {
            printf("\n\nO limite deve ser maior ou igual a 1\n\n");
            continue;
        }
        else if (LIMIT > 120)
        {
            printf("\n\nO limite deve ser menor ou igual a 120\n\n");
            continue;
        }

        showTable(choiced, LIMIT);

        print("Sair (s/n)");

        char leaveRes;
        scanf(" %c", &leaveRes);

        if (leaveRes == 's' || leaveRes == 'S')
        {
            isActiveQuests = false;
        }
    }

    return 0;
}