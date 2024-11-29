#include <stdio.h>

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

void print_digits(int n)
{
    int digits_count = count_digits(n);
    int arr[digits_count];

    for(int i = digits_count - 1; i >= 0; i--) {
        arr[i] = n % 10;
        n /= 10;
    }

    print_array(digits_count, arr);

}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_digits(n);

    return 0;
}