#include <stdio.h>

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_array(int n, int *arr)
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }
}

int count_digits(int n)
{
    int counter = 0;

    while (n > 0)
    {
        counter++;
        n /= 10;
    }

    return counter;
}

int create_max_number(int n)
{
    int digits_count = count_digits(n);
    int arr[digits_count];
    int result = 0;

    for (int i = 0; i < digits_count; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }

    sort_array(digits_count, arr);

    for (int i = 0; i < digits_count; i++)
    {
        result = result * 10 + arr[i];
    }

    return result;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d", create_max_number(n));

    return 0;
}