#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
    double r;
    scanf("%lf", &r);
    printf("%.6f\n", r * r * M_PI);
    printf("%.6f\n", r * r * 2);
}