#include <stdio.h>
#include <math.h>

const float PI = 3.1415926535;

float sinus(float x)
{
    float Xn = x;
    float sum = 0.0;
    int i = 1;

    do
    {
        sum += Xn;
        Xn *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    } while (fabs(Xn) > 0.001);

    return sum;
}

int main(void)
{
    float x;

    scanf("%f", &x);

    x *= PI / 180.0;

    printf("%.3f", sinus(x));

    return 0;
}
