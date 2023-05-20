#include <stdio.h>

int stack[100001];
char out[200001];

int main(void)
{
    int i;
    int n;
    int top;
    int o;
    int save;

    scanf("%d", &n);
    i = 0;
    top = 1;
    save = 1;
    o = 0;
    while(++i <= n)
    {   
        int input;
        scanf("%d", &input);
        while(1)
        {
            while(save <= input)
            {
                stack[top] = save;
                top++;
                save++;
                out[++o] = '+';
            }
            if(stack[top - 1] == input) break;
            if(stack[top - 1] > input)
            {
                printf("NO\n");
                return (0);
            }
        }
        top--;
        out[++o] = '-';
    }
    i = 0;
    while(++i <= o) printf("%c\n", out[i]); 
    
    return (0);
}