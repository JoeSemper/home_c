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

void sort_array(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        int x = a[i];
        int j = i;

        while (j > 0 && a[j - 1] > x)
        {
            a[j] = a[j - 1];
            j--;
        }

        a[j] = x;
    }
}

int main(void)
{
    enum { SIZE = 20 };

    int a[SIZE];

    input_array(SIZE, a);

    sort_array(SIZE, a);

    print_array(SIZE, a);

    return 0;
}