#include <stdio.h>

int arr[100001];
int prefix[100001];

int main(void)
{
    int n;
    int k;
    int i;
    int j;
    int max;
    max = -10000000;
    scanf("%d %d", &n, &k);
    i = 0;
    while(++i <= n) scanf("%d", &arr[i]);
    prefix[1] = arr[1];
    i = 1;
    while(++i <= n) prefix[i] = prefix[i - 1] + arr[i];
    i = 0;
    while(++i <= n - k + 1)
    {
        if(max < prefix[i + k - 1] - prefix[i - 1]) max = prefix[i + k - 1] - prefix[i - 1];
    }
    printf("%d\n", max);
    return (0);
}