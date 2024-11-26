#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_reverse_array(int n, int *arr)
{
    int rev_arr[n];
    int a;

    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            a = arr[n / 2 - 1 - i];
            rev_arr[i] = a;

            printf("%d ", rev_arr[i]);
        }
        else
        {
            a = arr[n - 1 - i + n / 2];
            rev_arr[i] = a;

            printf("%d ", rev_arr[i]);
        }
    }

    arr = rev_arr;
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    print_reverse_array(n, arr);

    return 0;
}