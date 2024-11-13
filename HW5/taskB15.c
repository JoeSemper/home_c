#include <stdio.h>

int main()
{
    int a, result;

    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }

        if (a % 2 == 0)
        {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}