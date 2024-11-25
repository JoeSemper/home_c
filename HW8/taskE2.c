#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int find_min(int n, int *arr)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        min = min < arr[i] ? min : arr[i];
    }

    return min;
}

int main(void)
{
    int n = 5;

    int arr[n];

    input_array(n, arr);

    printf("%d", find_min(n, arr));

    return 0;
}