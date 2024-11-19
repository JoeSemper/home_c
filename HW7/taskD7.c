#include <stdio.h>

void print_reverse(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("%d ", n);

    print_reverse(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_reverse(n);

    return 0;
}