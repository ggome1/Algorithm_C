#include <stdio.h>

int arr[21][21];
int na[21];
int n;
int start;
int link;
int min = 20000;

int abs(int n)
{
    return n > 0 ? n : -(n);
}

void bt(int idx, int cnt)
{
    if(cnt == n / 2)
    {
        int i;
        int j;
        i = -1;
        start = 0;
        link = 0;
        while(++i < n)
        {
            j = i;
            while(++j < n)
            {
                if(na[i] && na[j]) start += arr[i][j] + arr[j][i];
                if(!na[i] && !na[j]) link += arr[i][j] + arr[j][i];
            }
        }
        if(min > abs(start - link))
        {
            min = abs(start - link);
        }
        return;

    }
    
    int i;
    i = idx - 1;
    while(++i < n)
    {
        if(!na[i])
        {
            na[i] = 1;
            bt(i + 1, cnt + 1);
            na[i] = 0;
        }
    }
}

int main(void)
{
    int i;
    int j;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bt(0, 0);
    printf("%d\n", min);
    return (0);
}