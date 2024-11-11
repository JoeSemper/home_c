#include <stdio.h>

int main()
{
    int a, temp, result = 0;

    scanf("%d", &a);

    while (a > 0)
    {

        temp = a % 10;
        a /= 10;

        if ((a % 10) == temp)
        {
            result = 1;
            break;
        }
    }

    if (result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}