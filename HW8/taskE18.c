#include <stdio.h>

int count_multiples(int n, int number)
{
    int counter = 0;

    for (int i = 2; i <= n; i++)
    {
        if (i % number == 0)
        {
            counter++;
        }
    }

    return counter;
}

void print_multiples(int n)
{
    for (int i = 2; i <= 9; i++)
    {
        printf("%d %d\n", i, count_multiples(n, i));
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_multiples(n);

    return 0;
}