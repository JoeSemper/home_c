#include <stdio.h>

void print_digit(char s[])
{
    int a[10] = {0};
    int i = 0;

    while(s[i] !='\0'){
        if(s[i] >= '0' && s[i] <= '9') {
            a[s[i] - '0']++;
        }
        i++;
    }

    for(int i = 0; i < 10; i++) {
        if(a[i]) {
            printf("%d %d\n", i, a[i]);
        }
    }
}

int main(void)
{
    char s[] = "Hello123 world77.";

    print_digit(s);

    return 0;
}