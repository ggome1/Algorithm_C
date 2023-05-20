#include <stdio.h>

int arr[1001][1001];
int i;
int j;

int pascal(int n, int k)
{
    i = -1;
    while(++i <= n)
    {
        j = -1;
        while(++j <= i)
        {
            if(i == j || j == 0) arr[i][j] = 1;
            else
            {
                arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % 10007;
            }
        }
    }
}

int main(void)
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    pascal(n, k);
    printf("%d", arr[n][k]);
    return (0);
}