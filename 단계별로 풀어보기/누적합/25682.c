#include <stdio.h>

char board[2001][2001];
int wc[2001][2001];
int bc[2001][2001];
int n;
int m;
int k;

int min(int a, int b)
{
    return a > b ? b : a;
}

int compare(char c)
{
	if(c == 'B') return 1;
	if(c == 'W') return 0;
	return -1;
}

int main(void)
{
    int i;
    int j;
    int res;
    scanf("%d %d %d", &n, &m, &k);
    i = -1;
    while(++i < n)
    {
        scanf("%s", board[i]);
    }
    i = 0;
    while(++i <= n)
    {
        j = 0;
        while(++j <= m)
        {
            wc[i][j] += ((i + j) % 2 != compare(board[i - 1][j - 1]));
			wc[i][j] += (wc[i - 1][j] + wc[i][j - 1] - wc[i - 1][j - 1]);
        }
    }
    
    i = 0;
	res = 4000001;
    while(++i <= n - k + 1)
    {
        j = 0;
        while(++j <= m - k + 1)
        {
            int temp;
			temp = wc[i + k - 1][j + k - 1] - wc[i - 1][j + k - 1] - wc[i + k - 1][j - 1] + wc[i - 1][j - 1];
            temp = min(temp, k * k - temp);
			if(res > temp) res = temp;
        }
    }
    printf("%d\n", res);
    return (0);
}