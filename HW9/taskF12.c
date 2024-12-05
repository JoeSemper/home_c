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

void change_max_min(int size, int a[])
{
    int min = 0;
    int max = 0;

    for (int i = 1; i < size; i++)
    {
        min = a[i] < a[min] ? i : min;
        max = a[i] > a[max] ? i : max;
    }

    int temp = a[min];
    a[min] = a[max];
    a[max] = temp;
}

int main(void)
{
    enum
    {
        SIZE = 10
    };

    int a[SIZE];

    input_array(SIZE, a);

    change_max_min(SIZE, a);

    print_array(SIZE, a);

    return 0;
}