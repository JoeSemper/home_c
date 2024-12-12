#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *in, *out;
    signed char c;

    int max_length = 0;
    char str[1000];

    char temp[1000];

    int start = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while (fscanf(in, "%s", temp) != EOF)
    {
        int end = ftell(in);
        int length = end - start;

        if(length > max_length) {
            strcpy(str, temp);
            max_length = length;
        }

        start = end + 1;

    }

    fprintf(out, "%s", str);

    fclose(in);
    fclose(out);

    return 0;
}