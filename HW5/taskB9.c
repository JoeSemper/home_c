#include <stdio.h>

int main()
{
    int a, odd_count = 0;

    scanf("%d", &a);

    while (a > 0)
    {

        if (((a % 10) % 2) != 0)
        {
            odd_count++;
        }

        a /= 10;
    }

    odd_count > 0 ? printf("NO") : printf("YES");

    return 0;
}