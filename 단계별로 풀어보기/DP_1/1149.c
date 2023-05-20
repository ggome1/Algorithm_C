#include <stdio.h>

int n;
int arr[1001][4];
int dy[1001][4];

int min(int a, int b)
{
    return a > b ? b : a;
}

int dp()
{
    int i;
    i = 0;
    dy[0][0] = arr[0][0];
    dy[0][1] = arr[0][1];
    dy[0][2] = arr[0][2];

    while(++i < n)
    {
        dy[i][0] = min(dy[i - 1][1], dy[i - 1][2]) + arr[i][0];
        dy[i][1] = min(dy[i - 1][2], dy[i - 1][0]) + arr[i][1];
        dy[i][2] = min(dy[i - 1][1], dy[i - 1][0]) + arr[i][2];
    }
    
}

int main(void)
{
    int i;
    int j;
    int min;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < 3) scanf("%d", &arr[i][j]);
    }
    dp();
    min = dy[n - 1][0];
    i = 0;
    while(++i < 3)
    {
        if(min > dy[n - 1][i]) min = dy[n - 1][i];
    }
    
    printf("%d\n", min);
    return (0);
}