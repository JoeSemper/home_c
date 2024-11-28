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
    printf("\n");
}

void sort_array(int n, int *arr)
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
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

int find_duplicate(int n, int *arr, int *result)
{
    sort_array(n, arr);

    int previous = arr[0];
    int current_index = 0;
    int counter = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == previous)
        {
            if (counter < 1)
            {
                result[current_index] = arr[i];
                current_index++;
            }
            counter++;
        }
        else
        {
            counter = 0;
        }
        previous = arr[i];
    }

    return current_index;
}

int main(void)
{
    int n = 10;

    int arr[n];

    int result[n];

    input_array(n, arr);

    int result_size = find_duplicate(n, arr, result);

    print_array(result_size, result);

    return 0;
}