#include <stdio.h>

int factorial(int a);

int main()
{
    int n;
    int count_0;
    count_0 = 0;
    scanf("%d", &n);
    count_0 += n/5;
    count_0 += n/25;
    count_0 += n/125;
    printf("%d\n", count_0);
}