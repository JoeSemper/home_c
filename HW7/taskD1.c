#include <stdio.h>

void print_recurse(int n)
{
    if (n == 0)
    {
        return;
    }

    print_recurse(n - 1);
    printf("%d ", n);
}

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    print_recurse(n);

    return 0;
}