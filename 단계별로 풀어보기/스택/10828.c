#include <stdio.h>
#include <string.h>

int stack[10001];

int main(void)
{
    int n;
    int i;
    int num;
    int top;
    char order[10];
    scanf("%d", &n);
    top = 0;
    i = -1;
    while(++i < n)
    {
        scanf(" %s", order);
        if(!(strcmp(order, "push")))
        {
            scanf("%d", &num);
            stack[++top] = num;
        }
        else if(!(strcmp(order, "pop")))
        {
            if(top == 0) printf("-1\n");
            else printf("%d\n", stack[top--]);
        }
        else if(!(strcmp(order, "size")))
        {
            printf("%d\n", top);
        }
        else if(!(strcmp(order, "empty")))
        {
            printf("%d\n", top == 0);
        }
        else if(!(strcmp(order, "top")))
        {
            if(top == 0) printf("-1\n");
            else printf("%d\n", stack[top]);
        }
    }
}