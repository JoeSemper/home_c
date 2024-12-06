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

int is_even_more(int size, int a[])
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            counter++;
        }
    }

    return counter > (size - counter);
}

void replace_even_odd(int size, int a[])
{
    int even_is_more = is_even_more(size, a);

    for (int i = 0; i < size; i++)
    {
        if (even_is_more)
        {
            if (a[i] % 2 != 0)
            {
                int result = 1;
                int tmp = a[i];

                while (tmp > 0)
                {
                    if ((tmp % 10) % 2 != 0)
                    {
                        result *= tmp % 10;
                    }

                    tmp /= 10;
                }

                a[i] = result;
            }
        }
        else
        {
            if(a[i] % 2 == 0) {

                int result = 1;
                int tmp = a[i];

                while (tmp > 0)
                {
                    if ((tmp % 10) % 2 == 0)
                    {
                        result *= tmp % 10;
                    }

                    tmp /= 10;
                }

                a[i] = result;
            }
        }
    }
}

int main(void)
{
    enum
    {
        SIZE = 10
    };

    int a[SIZE];

    input_array(SIZE, a);

    replace_even_odd(SIZE, a);

    print_array(SIZE, a);

    return 0;
}