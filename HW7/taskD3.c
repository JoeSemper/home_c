#include <stdio.h>

void print_straight_digits(int n)
{
    printf("%d ", n % 10);

    if ((n / 10) != 0)
    {
        print_straight_digits(n / 10);
    }
}

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    print_straight_digits(n);

    return 0;
}