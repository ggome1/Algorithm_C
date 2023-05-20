#include <stdio.h>
#define max(a, b) a >= b ? a : b
int n;
int arr[301];
int dy[301];

int dp()
{
    int i;
    dy[0] = 0;
    dy[1] = arr[1];
    dy[2] = arr[1] + arr[2];
    i = 2;
    while(++i <= n)
    {
        dy[i] = (max(dy[i - 2], arr[i - 1] + dy[i - 3])) + arr[i];
    }
}

int main(void)
{
    int i;
    scanf("%d", &n);
    i = 0;
    while(++i <= n) scanf("%d", &arr[i]);
    dp();
    i = -1;
    
    printf("%d ", dy[n]);
}
