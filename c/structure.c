#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

struct position
{
    float x;
    float y;
};

bool checkHitPoint(struct position element, struct position target)
{
    float const MAX_DIFF = 0.50;

    bool isHittedHorizontal = (element.x - target.x) <= MAX_DIFF;
    bool isHittedVertical = (element.y - target.y) <= MAX_DIFF;

    return (bool)(isHittedHorizontal && isHittedVertical);
}

int main()
{
    struct position element;

    struct position hitElement;

    element.x = 10;
    element.y = 5;

    hitElement.x = 9;
    hitElement.y = 6;

    bool isHitted = checkHitPoint(element, hitElement);

    assert(isHitted == false);

    element.x = 9.5;
    element.y = 5.5;

    isHitted = checkHitPoint(element, hitElement);

    assert(isHitted == true);

    element.x = 9.51;

    isHitted = checkHitPoint(element, hitElement);

    assert(isHitted == false);
    return 0;
}