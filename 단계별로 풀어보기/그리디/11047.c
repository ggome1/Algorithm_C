#include <stdio.h>

int main(void)
{
    int arr[12];
    int n;
    int k;
    int i;
    int count;
    scanf("%d %d", &n, &k);
    i = 0;
    while(++i <= n) scanf("%d", &arr[i]);
    count = 0;
    n++;
    while(--n)
    {
        if(k == 0) break;
        if(arr[n] > k) continue;
        count += k / arr[n];
        k %= arr[n];
    }
    printf("%d\n", count);
    return (0);
}