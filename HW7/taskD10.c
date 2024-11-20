#include <stdio.h>

int is_prime(int n, int divider)
{

    divider--;

    if (divider == 1)
    {
        return 1;
    }

    if(divider < 1) {
        return 0;
    }

    if (n % divider == 0)
    {
        return 0;
    }

    return is_prime(n, divider);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    is_prime(n, n) ? printf("YES") : printf("NO");

    return 0;
}