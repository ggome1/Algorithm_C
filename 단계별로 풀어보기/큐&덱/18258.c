#include <stdio.h>
#include <string.h>

int queue[2000001];
char order[10];

int main(void)
{
    int n;
    int i;
    int head;
    int tail;
    int num;

    scanf("%d", &n);
    i = -1;
    head = 0;
    tail = 0;
    while(++i < n)
    {
        scanf(" %s", order);
        if(!strcmp(order, "push"))
        {
            scanf("%d", &num);
            queue[tail++] = num;
        }
        else if(!strcmp(order, "pop"))
        {
            if(head == tail) printf("-1\n");
            else printf("%d\n", queue[head++]);
        }
        else if(!strcmp(order, "size"))
        {
            printf("%d\n", tail - head);
        }
        else if(!strcmp(order, "empty"))
        {
            if(head == tail) printf("1\n");
            else printf("0\n");
        }
        else if(!strcmp(order, "front"))
        {
            if(head == tail) printf("-1\n");
            else printf("%d\n", queue[head]);
        }
        else if(!strcmp(order, "back"))
        {
            if(head == tail) printf("-1\n");
            else printf("%d\n", queue[tail - 1]);
        }
    }
    return (0);
}