#include <stdio.h>

void input_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

float find_avarage(int n, int *arr)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum / 5.;
}

int main(void)
{
    int n = 5;

    int arr[n];

    input_array(n, arr);

    printf("%.3f", find_avarage(n, arr));

    return 0;
}