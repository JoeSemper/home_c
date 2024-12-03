#include <stdio.h>

int is_two_same(int size, int a[])
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j && a[i] == a[j])
            {
                result = 1;
                goto stop;
            }
        }
    }

stop:
    return result;
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};

    printf("%d", is_two_same(5, a));

    return 0;
}