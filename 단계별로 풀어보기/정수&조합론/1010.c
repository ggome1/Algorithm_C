#include <stdio.h>
#include <math.h>

int main(void)
{
    int k;
    int i;
    int n;
    int m;
    double res;
    int j;
    int temp_n;

    scanf("%d", &k);
    i = -1;
    while(++i < k)
    {
        res = 1;
        scanf("%d %d", &n, &m);
        temp_n = n;
        j = -1;
        while(++j < n)
        {
            res *= m--;
        } 
        j = -1;
        while(++j < n)
        {
            res /= temp_n--;
        } 
        printf("%.f\n", res);
    }
    return (0);
}
