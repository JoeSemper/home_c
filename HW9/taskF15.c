#include <stdio.h>

int main(void)
{
    int a[2];

    a[0] = getchar() - 'A' + 1;
    a[1] = getchar() - '0';

    if(a[0] % 2 == 1 && a[1] % 2 == 1 || a[0] == a[1]) {
        printf("BLACK");
    } else {
        printf("WHITE");
    }

    return 0;
}