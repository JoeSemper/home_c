#include <stdio.h>

int main()
{
    int a, nine_count = 0;

    scanf("%d", &a);

    while (a > 0)
    {

        if ((a % 10) == 9)
        {
            nine_count++;
        }

        a /= 10;
    }

    nine_count == 1 ? printf("YES") : printf("NO");

    return 0;
}