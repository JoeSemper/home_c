#include <stdio.h>

int abs(int num)
{
    return num > 0 ? num : -num;
}

int main(void)
{

    int a;

    scanf("%d", &a);

    printf("%d", abs(a));

    return 0;
}