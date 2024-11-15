#include <stdio.h>
#include <stdbool.h>

bool is_happy_number(int a)
{
    int sum = 0;
    int prod = 1;

    while (a > 0)
    {
        sum += a % 10;
        prod *= a % 10;
        a /= 10;
    }

    return sum == prod;
}

int main(void)
{
    int a;

    scanf("%d", &a);

    is_happy_number(a) ? printf("YES") : printf("NO");

    return 0;
}