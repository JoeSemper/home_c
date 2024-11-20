#include <stdio.h>

int acounter(void)
{
    static int counter = 0;

    char c;

    scanf("%c", &c);

    if (c == '.')
    {
        int result = counter;
        counter = 0;
        return (result);
    }

    if (c == 'a')
    {
        counter++;
    }

    acounter();
}

int main(void)
{

    printf("%d", acounter());

    return 0;
}