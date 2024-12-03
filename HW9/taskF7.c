#include <stdio.h>

void print_array(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int compression(int a[], int b[], int N)
{
    int check = 0;
    int counter = 0;
    int j = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i] == check)
        {
            counter++;
        }
        else
        {
            b[j] = counter;
            check = !check;
            counter = 1;
            j++;
        }
    }

    b[j] = counter;

    return j + 1;
}

int main(void)
{
    int a[10] = {1, 1, 1, 0, 0, 1, 0, 0, 1, 1};
    int b[100];

    int n = compression(a, b, 10);

    print_array(n, b);

    return 0;
}