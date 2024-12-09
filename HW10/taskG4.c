#include <stdio.h>

void sort_array(int n, char *arr)
{
    int tmp;
    int noSwap;

    for (int i = n - 1; i >= 0; i--)
    {
        noSwap = 1;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                noSwap = 0;
            }
        }

        if (noSwap == 1)
        {
            break;
        }
    }
}

int count_letter(int n, char *arr, char c)
{
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == c)
        {
            counter++;
        }
    }

    return counter;
}

int main(void)
{
    FILE *in, *out;

    int n1, n2;
    char c1[100], c2[100];

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%s", c1);
    n1 = ftell(in);

    fscanf(in, "%s", c2);
    n2 = ftell(in) - n1 - 1;

    sort_array(n1, c1);
    sort_array(n2, c2);

    for (int i = 0; i < n1; i++)
    {
        if ((count_letter(n1, c1, c1[i]) == 1) && (count_letter(n2, c2, c1[i]) == 1))
        {
            fprintf(out, "%c ", c1[i]);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}