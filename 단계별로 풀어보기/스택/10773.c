#include <stdio.h>

int stack[100001];

int main(void)
{
    int n;
    int i;
    int top;
    int num;
    int sum;
    scanf("%d", &n);
    top = -1;
    i = -1;
    while(++i < n)
    {
        scanf("%d", &num);
        if(num == 0) top--;
        else stack[++top] = num;
    }
    sum = 0;
    i = -1;
    while(++i <= top)
    {
        sum += stack[i];
    }
    printf("%d\n", sum);
    return (0);
}
