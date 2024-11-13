#include <stdio.h>

int main()
{
    int a, min, max;

    scanf("%d", &a);

    min = a % 10;
    max = a % 10;
    a /= 10;

    while (a > 0)
    {
        min = (a % 10) < min ? a % 10 : min;
        max = (a % 10) > max ? a % 10 : max;
        a /= 10;
    }

    printf("%d %d", min, max);

    return 0;
}