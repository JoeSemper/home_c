#include <stdio.h>

int main()
{
    int a, first, second, third, max;

    scanf("%d", &a);

    first = a % 10;
    second = (a / 10) % 10;
    third = (a / 100) % 10;

    max = first > second ? first : second;
    max = max > third ? max : third;

    printf("%d", max);

    return 0;
}