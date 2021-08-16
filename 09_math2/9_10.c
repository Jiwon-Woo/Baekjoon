#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(void)
{
    double  r;

    scanf("%lf", &r);

    printf("%.5f\n%.5f\n", r * r * M_PI, 2 * r * r);
}