#include <stdio.h>

int main(void)
{
    int n = 5;
    int matr[n][n];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matr[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += matr[i][i];
    }

    printf("%d", sum);

    return 0;
}