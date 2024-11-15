#include <stdio.h>
#include <stdbool.h>

bool grow_up(int a)
{
    int previous, result = true;

    while (a > 0)
    {

        previous = a % 10;
        a /= 10;

        if (a % 10 >= previous)
        {
            result = false;
            break;
        }
    }

    return result;
}

int main(void)
{
    int a;

    scanf("%d", &a);

    grow_up(a) ? printf("YES") : printf("NO");

    return 0;
}