#include <stdio.h>

int weight[101];
int value[101];
int dp[100001];

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n;
    int can;
    int i;
    int j;
    int res;
    scanf("%d %d", &n, &can);
    i = 0;
    while(++i <= n) scanf("%d %d", &weight[i], &value[i]);
    i = 0;
    while(++i <= n)
    {
        j = can + 1;
        while(--j >= 1)
        {
            if(j >= weight[i]) dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    i = 0;
    res = 0;
    while(++i <= can) if(res < dp[i]) res = dp[i];
    printf("%d\n", res);
    return (0);
}