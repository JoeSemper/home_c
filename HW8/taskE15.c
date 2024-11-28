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

int find_numbers(int n, int *arr, int *result, int find_positive)
{
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (find_positive? arr[i] > 0 : arr[i] < 0)
        {
            result[index] = arr[i];
            index ++;
        }
        
    }

    return index;
}

int main(void)
{
    int n = 10;

    int arr[n];

    int positive[n];
    int negative[n];

    input_array(n, arr);

    int positive_size = find_numbers(n, arr, positive, 1);
    int negative_size = find_numbers(n, arr, negative, 0);

    print_array(positive_size, positive);
    print_array(negative_size, negative);

    return 0;
}