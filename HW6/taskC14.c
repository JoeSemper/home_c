#include <stdio.h>
#include <stdbool.h>

bool is_even(int a)
{
    int result = 0;

    while (a > 0 || a < 0)
    {
        result += a % 10;
        a /= 10;
    }

    return result % 2 == 0 ? true : false;
}

int main(void)
{
    int a;

    scanf("%d", &a);

    is_even(a) ? printf("YES") : printf("NO");

    return 0;
}