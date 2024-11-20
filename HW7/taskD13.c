#include <stdio.h>

void print_simple(int n, int div)
{
    if (n == 1)
    {
        return;
    }

    if (n % div == 0)
    {
        printf("%d ", div);
        print_simple((n / div), div);
    }
    else
    {
        print_simple(n, div + 1);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_simple(n, 2);

    return 0;
}
