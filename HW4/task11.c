#include <stdio.h>

int main()
{
    int a, b, c, result;

    scanf("%d%d%d", &a, &b, &c);

    result = (a + b > c) && (b + c > a) && (a + c > b);

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