#include <stdio.h>

int arr[1025][1025];

int main(void)
{
    int n;
    int m;
    int i;
    int j;
    scanf("%d %d", &n, &m);
    i = 0;
    while(++i <= n)
    {
        j = 0;
        while(++j <= n)
        {
            scanf("%d", &arr[i][j]);
            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }
    i = -1;
    while(++i < m)
    {
        int x1;
        int y1;
        int x2;
        int y2;
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1]);
    }
    return (0);
}