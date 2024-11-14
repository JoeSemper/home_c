#include <stdio.h>

int translate(int n, int p)
{
    int result = 0;

    for (int i = 1; n > 0; i *= 10)
    {
        result += (n % p) * i;
        n /= p;
    }

    return result;
}

int main(void)
{

    int n, p;

    scanf("%d%d", &n, &p);

    printf("%d", translate(n, p));

    return 0;
}