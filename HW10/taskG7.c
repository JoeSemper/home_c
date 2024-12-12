#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    signed char c;
    int small = 0, capital = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while ((c = getc(in)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            small++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            capital++;
        }
    }

    fprintf(out, "%d %d", small, capital);

    fclose(in);
    fclose(out);

    return 0;
}