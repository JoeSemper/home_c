#include <stdio.h>

int max_find(int max)
{
    int n;

    scanf("%d", &n);

    if (n == 0)
    {
        return max;
    }

    (n > max || max == 0) ? max_find(n) : max_find(max);
}

int main(void)
{
    printf("%d", max_find(0));

    return 0;
}