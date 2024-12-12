#include <stdio.h>

void sort_array(int n, int *arr)
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

int main(void)
{
    FILE *in, *out;
    signed char c;
    int n = 0;
    int result[1000];

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    while ((c = getc(in)) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            int temp = c - '0';

            while((c = getc(in)) >= '0' && c <= '9' && c != EOF){
                temp *= 10;
                temp += c - '0';
            }

            result[n++] = temp;
        }
    }

    sort_array(n, result);

    for(int i = 0; i< n; i++) {
      fprintf(out, "%d ", result[i]);  
    }

    fclose(in);
    fclose(out);

    return 0;
}