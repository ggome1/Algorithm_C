#include <stdio.h>

long long road[100001];
long long price[100001];

int main(void)
{
    int n;
    int i;
    int j;
    long long sum_price;
    int min;
    scanf("%d", &n);
    i = -1;
    while(++i < n - 1) scanf("%lld", &road[i]);
    i = -1;
    while(++i < n) scanf("%lld", &price[i]);
    
    sum_price = 0;
    min = price[0];
    i = -1;
    while(++i < n - 1)
    {
        if(min > price[i]) min = price[i];
        sum_price += min * road[i];
    }
    printf("%lld\n", sum_price);
}