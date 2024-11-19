#include <stdio.h>

void print_a_to_b(int a, int b)
{

    if (a == b)
    {
        printf("%d ", a);
        return;
    }
    else if (a > b)
    {
        printf("%d ", a);
        print_a_to_b(a - 1, b);
    }
    else
    {
        print_a_to_b(a, b - 1);
        printf("%d ", b);
    }
}

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);

    print_a_to_b(a, b);

    return 0;
}