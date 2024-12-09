#include <stdio.h>

int main(void)
{
    FILE *in, *out;

    signed char end, c;
    int n = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while((c = getc(in)) != EOF)
    {
        if (c >= ' ' && c <= '~')
        {
            end = c;
            n++;
        }
    }

    fseek(in, 0, SEEK_SET);

    for (int i = 0; i < n - 1; i++)
    {
        c = fgetc(in);

        if (c == end)
        {
            fprintf(out, "%d ", i);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}