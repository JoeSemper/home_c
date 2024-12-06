#include <stdio.h>

int find_avg(int n, int a[n][n])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    return sum / n;
}

int main(void)
{
    int n = 5;
    int matr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matr[i][j]);
        }
    }

    int avg = find_avg(n, matr);

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) {
            if(matr[i][j] > avg) {
                counter++;
            }
        }
    }

    printf("%d", counter);

    return 0;
}