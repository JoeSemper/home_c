#include <stdio.h>

int main()
{
    int a, result = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        result *= 10;
        result += a % 10;
        a /= 10;
    }

    printf("%d", result);

    return 0;
}