#include <stdio.h>
#define max(a, b) a > b ? a : b

int n;
int arr[10001];
int dp[10001];

int main(void)
{
    int i;
    int res;
    scanf("%d", &n);
    i = 0;
    while(++i <= n) scanf("%d", &arr[i]);
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    i = 2;      
    while(++i <= n) dp[i] = (max(dp[i - 1], (max(dp[i - 2] + arr[i], arr[i - 1] + dp[i - 3] + arr[i]))));
    
    
    printf("%d\n", dp[n]);
}