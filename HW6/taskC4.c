#include <stdio.h>

int f(int x)
{
    if (x >= 2)
    {
        return x * x + 4 * x + 5;
    }

    if (x < -2)
    {
        return 4;
    }

    if (x >= -2 && x < 2)
    {
        return x * x;
    }
}

int main(void)
{

    int x, max = 0;

    do
    {
        scanf("%d", &x);

        max = f(x) > max ? f(x) : max;

    } while (x != 0);

    printf("%d", max);

    return 0;
}