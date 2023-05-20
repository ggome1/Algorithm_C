#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int visited[9];
int arr[9];
int n;
int m;

void bt(int cnt) {
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

    i = 0;
    while(++i <= n)
    {
        if(visited[i] != 1)
        {
            arr[cnt] = i;
            visited[i] = 1;
            bt(cnt + 1);
            visited[i] = 0;
        }
    }
    
}

int main(void) 
{
	scanf("%d %d", &n, &m);
    bt(0);
    return (0);
}
