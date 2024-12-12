#include <stdio.h>

int has_repeats(int n, char arr[], char c)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == c)
        {
            result = 1;
            break;
        }
    }

    return result;
}

int main(void)
{
    FILE *in, *out;
    signed char c;
    int n = 0;
    char result[1000];

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while ((c = getc(in)) != EOF)
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            if (!has_repeats(n, result, c) || n == 0)
            {
                result[n++] = c;
            }
        }
    }

    result[n] = '\0';

    fprintf(out, "%s", result);

    fclose(in);
    fclose(out);

    return 0;
}