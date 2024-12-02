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

void sort_even_odd(int n, int a[])
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;

        for (int j = 0; j < i; j++)
        {
            if (a[j + 1] % 2 == 0 && a[j] % 2 != 0)
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;

                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }
}

int main(void)
{
    enum
    {
        SIZE = 20
    };

    int a[SIZE];

    input_array(SIZE, a);

    sort_even_odd(SIZE, a);

    print_array(SIZE, a);

    return 0;
}