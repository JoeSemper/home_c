#include <stdio.h>

int main()
{
    int a, result = 1;

    scanf("%d", &a);

    while (a >= 10)
    {
        a /= 10;
        result++;
    }

    if (result == 3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}