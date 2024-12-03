#include <stdio.h>

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int find_first_negative(int size, int a[])
{
    int result = -1;

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            result = i;
            break;
        }
    }

    return result;
}

void swap_negmax_last(int size, int a[])
{

    int negmax_index = find_first_negative(size, a);

    if (negmax_index >= 0)
    {
        int negmax = a[negmax_index];

        for (int i = negmax_index + 1; i < size; i++)
        {
            if (a[i] < 0 && a[i] > negmax)
            {
                negmax = a[i];
                negmax_index = i;
            }
        }

        int tmp = a[negmax_index];
        a[negmax_index] = a[size - 1];
        a[size - 1] = tmp;
    }
}

int main(void)
{
    int a[5] = {2, -2, -3, 2, 5};

    swap_negmax_last(5, a);

    print_array(5, a);

    return 0;
}