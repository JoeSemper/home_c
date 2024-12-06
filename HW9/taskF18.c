#include <stdio.h>

int find_max(int n, int a[])
{
    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        max = max > a[i] ? max : a[i];
    }

    return max;
}

int main(void)
{
    int n = 10;
    int matr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += find_max(n, matr[i]);
    }

    printf("%d", sum);

    return 0;
}