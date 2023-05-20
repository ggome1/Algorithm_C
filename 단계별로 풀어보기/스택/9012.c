#include <stdio.h>
#include <string.h>

char stack[26];
char parenthesis[51];

int main(void)
{
    int n;
    int i;
    int j;
    int top;
    int flag;
    int len;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        scanf(" %s", parenthesis);
        len = strlen(parenthesis);
        top = -1;
        j = -1;
        flag = 0;
        while(++j < len)
        {
            if(parenthesis[j] == '(') top++;
            else
            {
                if(top > -1) top--;
                else
                {
                    flag = 1;
                    break;
                } 
            }
        }
        if(top == -1 && flag == 0) printf("YES\n");
        else printf("NO\n");
    }
    return (0);
}