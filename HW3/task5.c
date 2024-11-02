#include <stdio.h>

int main()
{
    unsigned int a;
    int result;

    scanf("%d", &a);

    result = ((a / 100) % 10) * ((a / 10) % 10 ) * (a % 10);

    printf("%d\n", result);

    return 0;
}