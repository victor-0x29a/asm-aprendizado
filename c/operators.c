#include <stdio.h>

void showInt(int intToShow)
{
    printf("\n%d\n", intToShow);
}

int main()
{
    int acc = 1;
    showInt(acc);

    acc++;
    showInt(acc);

    acc--;
    showInt(acc);

    acc + 5;
    acc - 5;

    acc / 2;

    acc % 2;

    acc * 2;

    acc += 1;
    acc -= 1;
    acc *= 2;
    acc /= 2;
    return 0;
}