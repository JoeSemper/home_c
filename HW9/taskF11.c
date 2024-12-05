#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int print_two_min(int n, int a[])
{
    int min_1 = a[0] < a[1] ? 0 : 1;
    int min_2 = a[0] > a[1] ? 0 : 1;

    for (int i = 2; i < n; i++)
    {
        if (a[i] <= a[min_1])
        {
            min_2 = min_1;
            min_1 = i;
        }
        else if (a[i] <= a[min_2] && a[1] >= a[min_1])
        {
            min_2 = i;
        }
    }

    min_1 < min_2 ? printf("%d %d", min_1, min_2) : printf("%d %d", min_2, min_1);
}

int main(void)
{
    enum
    {
        SIZE = 30
    };

    int a[SIZE];

    input_array(SIZE, a);

    print_two_min(SIZE, a);

    return 0;
}