#include <stdio.h>
#include <stdbool.h>

bool is_digit(char c)
{
    return c >= '0' && c <= '9';
}

int main(void)
{
    char c;
    int counter = 0;

    while ((c = getchar()) != '.')
    {
        if(is_digit(c)) 
            counter++;
    }

    printf("%d", counter);

    return 0;
}