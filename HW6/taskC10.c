#include <stdio.h>

int is_number_simple(int n)
{
    int result = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            result = 0;
        }
    }

    return result;
}

int get_next_simple_number(int n)
{
    for (int i = n + 1;; i++)
    {
        if (is_number_simple(i))
        {
            return i;
        }
    }
}

void print_simple(int n)
{
    int current_divider = 2;

    while (n > 1)
    {
        if ((n % current_divider) != 0)
        {
            current_divider = get_next_simple_number(current_divider);
        }
        else
        {
            printf("%d ", current_divider);
            n /= current_divider;
        }
    }
    return;
}

int main(void)
{

    int n;

    scanf("%d", &n);

    print_simple(n);

    return 0;
}