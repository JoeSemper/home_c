#include <stdio.h>

void monotonic_sequence(int n, int k)
{
    for (int i = 0; i < k; i++, n--)
    {
        if (n <= 0)
        {
            return;
        }

        printf("%d ", k);
    }

    monotonic_sequence(n, k + 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    monotonic_sequence(n, 1);

    return 0;
}