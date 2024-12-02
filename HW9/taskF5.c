#include <stdio.h>

int find_max_array(int size, int a[])
{
    int max = a[0];

    for(int i = 1; i < size; i++) {
        max = a[i] > max ? a[i] : max;
    }

    return max;
}

int main(void)
{
    int a[5] = {1, 2, 5, 4, 3};

    printf("%d", find_max_array(5, a));

    return 0;
}