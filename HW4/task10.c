#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a > 2 && a <= 5)
    {
        printf("spring");
    }
    else if (a > 5 && a <= 8)
    {
        printf("summer");
    }
    else if (a > 8 && a <= 11)
    {
        printf("autumn");
    }
    else
    {
        printf("winter");
    }

    return 0;
}