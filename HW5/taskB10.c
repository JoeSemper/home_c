#include <stdio.h>

int main()
{
    int a, previous, result = 1;

    scanf("%d", &a);

    while (a > 0)
    {

        previous = a % 10;
        a /= 10;

        if (a % 10 >= previous)
        {
            result = 0;
            break;
        }
    }

    result ? printf("YES") : printf("NO");

    return 0;
}