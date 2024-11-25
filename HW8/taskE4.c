#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int find_sum_two_max(int n, int *arr)
{
    int max_1 = arr[0] > arr[1] ? arr[0] : arr[1]; 
    int max_2 = arr[0] < arr[1] ? arr[0] : arr[1];

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max_1)
        {
            max_2 = max_1;
            max_1 = arr[i];
        }
        else if (arr[i] > max_2 && arr[1] < max_1)
        {
            max_2 = arr[i];
        }
    }

    return max_1 + max_2;
}

int main(void)
{
    int n = 10;

    int arr[n];

    input_array(n, arr);

    printf("%d", find_sum_two_max(n, arr));

    return 0;
}