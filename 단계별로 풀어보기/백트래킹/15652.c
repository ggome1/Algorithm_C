#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int visited[9];
int arr[9];
int n;
int m;

void bt(int cnt, int k) {
    int i;
    i = -1;
    if(cnt == m)
    {
        while(++i < m)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    i = k - 1;
    while(++i <= n)
    {
        arr[cnt] = i;
        bt(cnt + 1, i);
    }
    
}

int main(void) 
{
	scanf("%d %d", &n, &m);
    bt(0, 1);
    return (0);
}
