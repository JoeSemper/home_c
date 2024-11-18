#include <stdio.h>

int sum_recurse(int n)
{
    if (n == 1)
    {
        return n;
    } 

    return (n + sum_recurse(n - 1));
}

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    printf("%d", sum_recurse(n));

    return 0;
}