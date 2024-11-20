#include <stdio.h>

int is2pow(int n)
{
    if (n <= 2)
    {
        return 1;
    }

    if (n % 2 != 0)
    {
        return 0;
    }

    is2pow(n / 2);
}

int main(void)
{

    int n;

    scanf("%d", &n);

    is2pow(n) ? printf("YES") : printf("NO");

    return 0;
}