#include <stdio.h>

int main()
{
    int n, fib = 0, a = 0, b = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        a = b;
        b = fib;
        fib = a + b;

        printf("%d ", fib);
    }

    return 0;
}