#include <stdio.h>

int main()
{
    int a, temp, result = 0;

    scanf("%d", &a);

    while (a > 0)
    {

        temp = a % 10;
        a /= 10;

        int temp2 = a;

        while (temp2 > 0)
        {

            if ((temp2 % 10) == temp)
            {
                result = 1;
            }

            temp2 /= 10;
        }

    }

    if (result)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}