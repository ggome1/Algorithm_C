#include <stdio.h>

int main(void)
{
    int n;
    int k;
    int res;
    int i;
    int k_temp;
    res = 1;
    i = -1;
    scanf("%d %d", &n, &k);
    k_temp = k;
    while(++i < k) res *= n--;
    i = -1;
    while(++i < k) res /= k_temp--;
    printf("%d\n", res);
    return (0);
}