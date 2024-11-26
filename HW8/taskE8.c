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

void reverse_array(int n, int *arr)
{
    int temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i * n / 3, k = i * n / 3 + n / 3 - 1; j < k; j++, k--)
        {
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
        }
    }
}

int main(void)
{
    int n = 12;

    int arr[n];

    input_array(n, arr);

    reverse_array(n, arr);

    print_array(n, arr);

    return 0;
}