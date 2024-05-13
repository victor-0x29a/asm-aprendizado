#include <stdio.h>

int main()
{
    const int MAX_DAYS = 7;

    int daysOcurred = 9;

    if (daysOcurred > MAX_DAYS)
    {
        printf("You can't have more than %d days in a week\n", MAX_DAYS);
        return 1;
    }

    printf("You paid %d dollars\n", 100);

    return 0;
}