#include <stdio.h>
#define min(a, b) a > b ? b : a

int main(void)
{
    int arr[1000001];
    int n;
    int i;

    scanf("%d", &n);
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    i = 3;
    while(++i <= n)
    {
        arr[i] = arr[i - 1] + 1;
        if(i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
        if(i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
    }
    printf("%d\n", arr[n]);
    return (0);
}