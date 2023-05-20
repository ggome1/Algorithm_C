#include <stdio.h>

int arr[501][501];
int n;

int max(int a, int b)
{
    return a > b ? a : b;
}

int dp()
{
    int i;
    int j;
    i = 0;
   
    while(++i < n)
    {
        j = -1;
        while(++j <= i)
        {
            if(j == 0) arr[i][j] += arr[i - 1][j];
            else if(j == i) arr[i][j] += arr[i - 1][j - 1];
            else arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
        }
    }
}

int main(void)
{
    int i;
    int j;
    int res;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j <= i)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    dp();
    i = 0;
    res = arr[n - 1][0];
    while(++i < n)
    {
        if(res < arr[n - 1][i]) res = arr[n - 1][i];
    }
    printf("%d\n", res);
}