#include <string.h>
#include <assert.h>

struct bigStructure
{
    char name[30];
};

int main()
{
    int const NO_DIFF = 0;

    struct bigStructure person;

    char name[30] = "Victor";

    strcpy(person.name, name);

    assert(strcmp(person.name, name) == NO_DIFF);

    struct bigStructure person2 = {"Victor"};

    assert(strcmp(person.name, name) == NO_DIFF);

    struct bigStructure person3;

    person3 = person2;

    assert(strcmp(person2.name, person3.name) == NO_DIFF);

    return 0;
}