#include <stdio.h>

void print_numbers(void)
{
    char c;
    int a[10] = {0};

    while((c=getchar())!='\n'){
        a[c - '0']++;
    }

    for(int i = 0; i < 10; i++) {
        if(a[i]) {
            printf("%d %d\n", i, a[i]);
        }
    }
}

int main(void)
{
    print_numbers();

    return 0;
}