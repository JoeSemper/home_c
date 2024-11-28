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

void sort_array(int n, int *arr, int sort_order)
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;

        for (int j = 0; j < i; j++)
        {
            if (sort_order ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }
}

void sort_increase_and_decrease(int n, int *arr)
{
    sort_array(n / 2, arr, 1);

    sort_array(n / 2, &arr[n / 2], 0);
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    sort_increase_and_decrease(n, arr);

    print_array(n, arr);

    return 0;
}