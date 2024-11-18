#include <stdio.h>

int convert_to_bin(int n)
{
    if ((n / 2) == 0)
    {
        return n % 2;
    }

    return (n % 2) + convert_to_bin(n / 2) * 10;
}

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    printf("%d", convert_to_bin(n));

    return 0;
}