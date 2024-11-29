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

int count_repeats(int n, int *arr, int number)
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            counter++;
        }
    }

    return counter;
}

void print_only_ones(int n, int *arr)
{

    for (int i = 0; i < n; i++)
    {
        int repeats = count_repeats(n, arr, arr[i]);

        if (repeats < 2)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    print_only_ones(n, arr);

    return 0;
}