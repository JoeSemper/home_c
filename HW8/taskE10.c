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

void shift_right(int n, int *arr, int shift)
{
    for (int k = 0; k < shift; k++)
    {
        int temp = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }
}

int main(void)
{
    int n = 12, shift = 4;

    int arr[n];

    input_array(n, arr);

    shift_right(n, arr, shift);

    print_array(n, arr);

    return 0;
}