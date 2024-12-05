#include <stdio.h>

void print_compression(void)
{
    char previous = getchar();
    char c;
    int counter = 1;

    while((c = getchar()) != '.')
    {
        if(c== previous) {
            counter++;
        } else {
            printf("%c%d", previous, counter);
            previous = c;
            counter = 1;
        }
    }

    printf("%c%d", previous, counter);
}

int main(void)
{
    print_compression();

    return 0;
}