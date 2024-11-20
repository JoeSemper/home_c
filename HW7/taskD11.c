#include <stdio.h>

int one_count(int n)
{
    if ((n / 2) == 0)
    {
        return n % 2;
    }

    return (n % 2) + one_count(n / 2);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d", one_count(n));

    return 0;
}