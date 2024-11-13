#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    while (a != 0 && b != 0)
    {
        if(a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }

    printf("%d", a + b);

    return 0;
}