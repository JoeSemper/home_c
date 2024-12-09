#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    signed char c;
    int count = 0, n = 3;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    for (int i = 0; i < n; i++)
    {
        while ((c = fgetc(in)) != EOF)
        {
            if (c >= ' ' && c <= '~')
            {
                fprintf(out, "%c", c);
                if (i == 0)
                {
                    count++;
                }
            }
        }

        if (i < n - 1)
        {
            fprintf(out, ", ");
        }

        fseek(in, 0, SEEK_SET);
    }

    fprintf(out, " %d", count);

    fclose(in);
    fclose(out);

    return 0;
}