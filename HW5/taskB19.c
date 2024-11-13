#include <stdio.h>

int main()
{
    int a, result = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        result += a % 10;
        a /= 10;
    }

    result == 10 ? printf("YES") : printf("NO");

    return 0;
}