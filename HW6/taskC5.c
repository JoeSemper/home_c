#include <stdio.h>
#include <inttypes.h>

uint64_t checkmate(uint64_t n)
{
    uint64_t a = 1;
    return a << (n - 1);
}

int main(void)
{

    uint64_t n;

    scanf("%d", &n);

    printf("%llu", checkmate(n));

    return 0;
}