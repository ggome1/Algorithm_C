#include <stdio.h>

int main(void)
{
    long long int arr[101];
    int n;
    int i;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;

    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        int m;
        int j;
        scanf("%d", &m);
        if(m >= 6)
        {
            j = 5;
            while(++j <= m)
            {
                arr[j] = arr[j - 2] + arr[j - 3];
            }
            printf("%lld\n", arr[m]);
        }
        else
        {
            printf("%lld\n", arr[m]);
        }
    }
    
}