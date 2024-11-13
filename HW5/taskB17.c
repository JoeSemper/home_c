#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    for (int i = 10; i <= a; i++)
    {
        int sum = 0;
        int prod = 1;
        int temp = i;

        while (temp > 0)
        {
            sum += temp % 10;
            prod *= temp % 10;
            temp /= 10;
        }

        if (sum == prod)
        {
            printf("%d ", i);
        }
    }
    return 0;
}