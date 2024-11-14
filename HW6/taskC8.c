#include <stdio.h>

char capitalize(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 0x20;
    }

    return c;
}

int main(void)
{

    char c;

    while (1)
    {
        scanf("%c", &c);

        if (c == '.')
        {
            break;
        }

        printf("%c", capitalize(c));
    }

    return 0;
}