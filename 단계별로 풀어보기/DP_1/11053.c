#include <stdio.h>

int arr[1001];
int dp[1001];

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int n;
    int i;
    int j;
    int res;
    scanf("%d", &n);
    i = 0;
    while(++i <= n) scanf("%d", &arr[i]);
    dp[1] = 1;
    res = dp[1];
    i = 1;
    while(++i <= n)
    {
        j = 0;
        while(++j < i)
        {
            if(arr[i] > arr[j] && dp[j] > dp[i])
            {
                dp[i] = dp[j];
            }
        }
        dp[i]++;
        res = max(res, dp[i]);
    }
    printf("%d\n", res);
    i = 0;
    while(++i <= n) printf("%d ", dp[i]);
    printf("\n");


}