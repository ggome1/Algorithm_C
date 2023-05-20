#include <stdio.h>
#include <string.h>

int queue[20001];

int main(void)
{
    int n;
    int i;
    int front;
    int rear;
    char order[11];
    int num;
    scanf("%d", &n);
    front = 10000;
    rear = 10000;
    i = -1;
    while(++i < n)
    {
        scanf(" %s", order);
        if(!strcmp(order, "push_front"))
        {
            scanf("%d", &num);
            queue[--front] = num;
        }
        else if(!strcmp(order, "push_back"))
        { 
            scanf("%d", &num);
            queue[rear++] = num;
        }
        else if(!strcmp(order, "pop_front"))
        {
            if(front == rear) printf("-1\n");
            else printf("%d\n", queue[front++]);  
        }
        else if(!strcmp(order, "pop_back"))
        {
            if(front == rear) printf("-1\n");
            else printf("%d\n", queue[--rear]);    
        }
        else if(!strcmp(order, "size"))
        {
            printf("%d\n", rear - front);  
        }
        else if(!strcmp(order, "empty"))
        {
            if(front == rear) printf("1\n");
            else printf("0\n");
        }
        else if(!strcmp(order, "front"))
        {
            if(front == rear) printf("-1\n");
            else printf("%d\n", queue[front]);
        }
        else if(!strcmp(order, "back"))
        {
            if(front == rear) printf("-1\n");
            else printf("%d\n", queue[rear - 1]);
        }
    }
    return (0);
}