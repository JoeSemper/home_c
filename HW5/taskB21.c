#include <stdio.h>

int main(void)
{

    char a = ' ';

    while (1)
    {
        scanf("%c", &a);

        if (a == '.')
        {
            break;
        }

        if (a >= 'A' && a <= 'Z')
        {
            a += 0x20;
        }

        printf("%c", a);
    }

    return 0;
}
