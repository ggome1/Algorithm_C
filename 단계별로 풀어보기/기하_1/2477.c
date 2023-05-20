#include <stdio.h>

int main()
{
    int count[4] = {0, };
    int arr[6][2];
    int n;
    int big;
    int small;
    big = 1;
    small = 1;
    scanf("%d", &n);
    int i;
    i = -1;
    while(++i < 6)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
        count[arr[i][0] - 1]++;
    }
    
    i = -1;
    while(++i < 6)
    {
        
        if(count[arr[i][0] - 1] == 1)
        {
            big *= arr[i][1];
            
            continue;
        }
        
        if (arr[i][0] == arr[(i + 2) % 6][0]) small *= arr[(i + 1) % 6][1];
    }
    printf("%d\n", n * (big - small));
    return 0;
}