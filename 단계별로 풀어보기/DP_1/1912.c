#include <stdio.h>

int n;
int max = -1000;
int arr[100001];
int dp[100001];

void find(int t)
{
    int i;
    dp[0] = arr[0];
    i = 0;
    while(++i < n)
    {
        if(dp[i - 1] + arr[i] > 0 && dp[i - 1] > 0) dp[i] = dp[i - 1] + arr[i];
        else dp[i] = arr[i]; 
    }
    
    return;
}

int main(void)
{
    int i;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        scanf("%d", &arr[i]);
    }
    find(n);
    i = -1;
    while(++i < n)
    {
        if(dp[i] > max) max = dp[i];
    }
    printf("%d\n", max);
    
    return (0);
}