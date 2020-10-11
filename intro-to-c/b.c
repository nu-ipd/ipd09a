#include <stdio.h>

double sqr_dbl(double n)
{
    return n * n;
}

int main(void)
{
    double x = 0.0;

    scanf("%lf", &x);
    printf("%g squared is %g\n", x, sqr_dbl(x));

    return 0;
}
