#include <stdio.h>

int find_missed_number(int min, int max, int sum)
{
    int result = 0;

    for (int i = min; i <= max; i++)
    {
        result += i;
    }

    return result - sum;
}

int main(void)
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    int min = n;
    int max = n;

    while (n != 0)
    {
        min = min < n ? min : n;
        max = max > n ? max : n;

        sum += n;

        scanf("%d", &n);
    }

    printf("%d", find_missed_number(min, max, sum));

    return 0;
}