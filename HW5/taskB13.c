#include <stdio.h>

int main()
{
    int a, even_count = 0, odd_count = 0;

    scanf("%d", &a);

    while (a > 0)
    {
        ((a % 10) % 2) == 0 ? even_count++ : odd_count++;
        a /= 10;
    }

    printf("%d %d", even_count, odd_count);

    return 0;
}