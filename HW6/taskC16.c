#include <stdio.h>
#include <stdbool.h>

bool grow_up(int a)
{
    bool result = true;

    if (a <= 1)
    {
        result = false;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            result = false;
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