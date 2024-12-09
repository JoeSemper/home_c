#include <stdio.h>

int main(void)
{
    FILE *in, *out;
    int n;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d", &n);

    signed c = 'A', k = '2';

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(out, "%c", c);
            c += 1;
        }
        else
        {
            fprintf(out, "%c", k);
            k += 2;

            if (k > '8')
            {
                k = '2';
            }
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}