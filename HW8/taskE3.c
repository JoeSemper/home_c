#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_max(int n, int *arr)
{
    int max = arr[0];
    int max_index = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i + 1;
        }
    }

    printf("%d %d ", max_index, max);
}

void print_min(int n, int *arr)
{
    int min = arr[0];
    int min_index = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i + 1;
        }
    }

    printf("%d %d ", min_index, min);
}

int main(void)
{
    int n = 10;
    int arr[n];

    input_array(n, arr);

    print_max(n, arr);
    print_min(n, arr);

    return 0;
}