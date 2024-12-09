#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    signed char c;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while ((c = getc(in)) != EOF)
    {
        if (c == 'a' || c == 'A')
        {
            fprintf(out, "%c", c + 1);
        }
        else if (c == 'b' || c == 'B')
        {
            fprintf(out, "%c", c - 1);
        }
        else
        {
            fprintf(out, "%c", c);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}