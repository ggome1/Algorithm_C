#include <stdio.h>

int queue[101];
int count;

int main(void)
{
    int t;
    int i;
    scanf("%d", &t);
    i = -1;
    while(++i < t)
    {
        int n;
        int m;
        int j;
        int max;
        int front;
        front = 0;
        max = 0;
        count = 0;
        scanf("%d %d", &n, &m);
        j = -1;
        while(++j < n) scanf("%d", &queue[j]);
        while(1)
        {
            j = -1;
            while(++j < n)
            {
                if(queue[j] > max) max = queue[j];
            }
            while(queue[front] != max) front = ++front % n;
            if(front == m) break;
            queue[front] = 0;
            front = ++front % n;
            max = 0;
            count++;
        }
        printf("%d\n", count + 1);
    }
    return (0);
}