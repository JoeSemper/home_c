#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int find_sum_positive(int n, int *arr)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    printf("%d", find_sum_positive(n, arr));

    return 0;
}