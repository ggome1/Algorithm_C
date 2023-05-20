#include <stdio.h>

typedef struct
{
    int data[1001];
    int front;
    int rear;
} queue;

void push(queue *que, int data)
{
    que->data[que->rear++ % 1000] = data;
}

int pop(queue *que)
{
    int data;
    data = que->data[que->front++ % 1000];
    return data;
}

int main(void)
{
    int n;
    int k;
    int i;
    scanf("%d %d", &n, &k);
    queue que;
    que.front = 0;
    que.rear = 0;
    i = -1;
    while(++i < n) push(&que, i + 1);
    printf("<");
    while(que.rear != que.front)
    {
        i = -1;
        while(++i < k - 1) push(&que, pop(&que));
        if(que.rear == que.front + 1) printf("%d>\n", pop(&que));
        else printf("%d, ", pop(&que));
    }
    return (0);
}