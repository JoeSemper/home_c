#include <stdio.h>

int main(void)
{
    char c;
    int counter = 0;

    while ((c = getchar()) != '.')
    {
        if (c == ')')
        {
            if (counter == 0)
            {
                counter--;
                break;
            }
            counter++;
        }
        else
        {
            counter--;
        }
    }

    counter == 0 ? printf("YES") : printf("NO");

    return 0;
}