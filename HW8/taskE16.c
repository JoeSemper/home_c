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

int find_most_frequint(int n, int *arr)
{
    sort_array(n, arr);

    int max = 0;
    int max_index = 0;

    int current_max = -1;

    int previous = arr[0];

    int counter = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == previous)
        {
            current_max++;

            if (current_max > max)
            {
                max = current_max;
                max_index = i - 1;
            }
        }
        else
        {
            if (current_max > max)
            {
                max = current_max;
                max_index = i - 1;
            }
            current_max = 0;
        }

        previous = arr[i];
    }

    return arr[max_index];
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    int result;

    result = find_most_frequint(n, arr);

    printf("%d", result);

    return 0;
}