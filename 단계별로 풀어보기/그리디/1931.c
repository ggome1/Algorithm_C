#include <stdio.h>
#include <stdlib.h>

typedef struct time
{
    int x;
    int y;
}time;

int static compare (const void* first, const void* second)
{
    time a = *(time *)first;
    time b = *(time *)second;
    if(a.y > b.y) return 1;
    if(a.y == b.y)
    {
        if(a.x > b.x) return 1;
        return -1;
    }
    return -1;
}

int count;

int main(void)
{
    int n;
    int i;
    int x;
    int y;
    time t[100001];
    scanf("%d", &n);
    i = -1;
    while(++i < n) scanf("%d %d", &t[i].x, &t[i].y);
    qsort(t, n, sizeof(time), compare);
    x = t[0].x;
    y = t[0].y;
    count = 1;
    i = 0;
    while(++i < n)
    {
        if(t[i].x >= y)
        {
            x = t[i].x;
            y = t[i].y;
            count++;
        }
    }
    printf("%d\n", count);
    return (0);
}