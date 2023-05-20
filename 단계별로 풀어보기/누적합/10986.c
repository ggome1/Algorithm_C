#include <stdio.h>

long long arr[1000001];
long long count[1001];

int main(void)
{
    int n;
    int m;
    int i;
    long long res;
    
    scanf("%d %d", &n, &m);
    i = 0;
    
    while(++i <= n)
    {
        scanf("%lld", &arr[i]);
        arr[i] += arr[i - 1];
        arr[i] %= m;
        count[arr[i]]++;
    }
    res = count[0];
    i = -1;
    while(++i < m)
    {
        res += count[i] * (count[i] - 1) / 2;
    }
    printf("%lld\n", res);
}