#include <stdio.h>

int is_palindrom(int n, char str[])
{
    int result = 1;

    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        if (str[i] != str[j])
        {
            result = 0;
            break;
        }
    }

    return result;
}

int main(void)
{
    FILE *in, *out;
    int n;
    char str[1000];

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%s", str);
    n = ftell(in);

    is_palindrom(n, str) ? fprintf(out, "YES") : fprintf(out, "NO");

    fclose(in);
    fclose(out);

    return 0;
}