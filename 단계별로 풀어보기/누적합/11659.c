#include <stdio.h>

int arr[100001];
int prefix[100001];

int main(void)
{
    int n;
    int m;
    int i;
    int j;
    int first;
    int last;
    i = 0;
    scanf("%d %d", &n, &m);
    while(++i <= n) scanf("%d", &arr[i]);
    prefix[1] = arr[1];
    i = 1;
    while(++i <= n) prefix[i] = prefix[i - 1] + arr[i];
    i = 0;
    while(++i <= m)
    {
        scanf("%d %d", &first, &last);
        printf("%d\n", prefix[last] - prefix[first - 1]);
    }
    
    
    return (0);
}