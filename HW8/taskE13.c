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

int count_zero(int n, int *arr)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / 10) % 10 == 0)
        {
            result++;
        }
    }

    return result;
}

void select_zero(int n, int *arr, int *result)
{

    int current_index = 0;

    for (int i = 0; i < n; i++)
    {

        if ((arr[i] / 10) % 10 == 0)
        {
            result[current_index] = arr[i];
            current_index++;
        }
    }
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    int result_size = count_zero(n, arr);

    int result[result_size];

    select_zero(n, arr, result);

    print_array(result_size, result);

    return 0;
}