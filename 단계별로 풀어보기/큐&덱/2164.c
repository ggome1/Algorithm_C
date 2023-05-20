#include <stdio.h>

int queue[1000001];

int main(void)
{
    int n;
    int head;
    int tail;
    int i;
    scanf("%d", &n);
    head = 0;
    tail = n;
    i = -1;
    while(++i < n) queue[i] = i + 1;
    i = -1;
    while(head != tail - 1)
    {
        head++;
        queue[++i + n] = queue[head++];
        tail++;
    }
    printf("%d\n", queue[head]);
    return (0);
}