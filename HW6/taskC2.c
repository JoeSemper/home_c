#include <stdio.h>

int power(int n, int p)
{
    int result = 1;

    for (int i = 0; i < p; i++)
    {
        result *= n;
    }

    return result;
}

int main(void)
{

    int n, p;

    scanf("%d %d", &n, &p);

    printf("%d", power(n, p));

    return 0;
}