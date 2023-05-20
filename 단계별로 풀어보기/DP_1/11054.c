#include <stdio.h>

int arr[1001];
int dp1[1001];
int dp2[1001];

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
    dp1[1] = 1;
    res = 1;
    i = 1;
    while(++i <= n)
    {
        j = 0;
        while(++j < i)
        {
            if(arr[i] > arr[j] && dp1[j] > dp1[i])
            {
                dp1[i] = dp1[j];
            }
        }
        dp1[i]++;
    }
    
    i = n;
    dp2[n] = 1;
    while(--i >= 1)
    {
        j = n + 1;
        while(--j > i)
        {
            if(arr[i] > arr[j] && dp2[j] > dp2[i])
            {
                dp2[i] = dp2[j];
            }
        }
        dp2[i]++;  
    }
    i = 0;
    while(++i <= n)
    {
        dp1[i] += dp2[i] - 1;
        if(dp1[i] > res) res = dp1[i];
    } 
    printf("%d\n", res);
}