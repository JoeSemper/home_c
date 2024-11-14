#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main(void)
{

    int n;

    scanf("%d", &n);

    printf("%d", factorial(n));

    return 0;
}