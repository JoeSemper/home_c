#include <stdio.h>

int main()
{
    int a, b, c;
    int result;

    scanf("%d %d %d", &a, &b, &c);

    result = a + b + c;

    printf("%d+%d+%d=%d", a, b, c, result);

    return 0;
}