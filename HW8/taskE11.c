#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort_by_last_digit(int n, int *arr)
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;
        for (int j = 0; j < i; j++)
        {
            if ((arr[j] % 10) > (arr[j + 1] % 10))
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    sort_by_last_digit(n, arr);

    print_array(n, arr);

    return 0;
}