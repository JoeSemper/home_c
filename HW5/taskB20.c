#include <stdio.h>

int main()
{
    int a, result = 1;

    scanf("%d", &a);

    if (a == 1)
    {
        result = 0;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            result = 0;
        }
    }

    result ? printf("YES") : printf("NO");

    return 0;
}