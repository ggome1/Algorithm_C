#include <stdio.h>
#include <string.h>

char sentence[1001];
char stack[1001];

int main(void)
{
    while(1)
    {
        fgets(sentence, 102, stdin);
        if(!strcmp(sentence, ".\n")) break;
        int len;
        int i;
        int flag;
        int top;
        top = -1;
        flag = 0;
        len = strlen(sentence);
        i = -1;
        while(++i < len)
        {
            if(sentence[i] == '[')
            {
                stack[++top] = '[';
            }
            else if(sentence[i] == '(')
            {
                stack[++top] = '(';
            }
            else if(sentence[i] == ')')
            {
                if(top > -1 && stack[top] == '(') top--;
                else
                {
                    flag = 1;
                    break;
                }
            }
            else if(sentence[i] == ']')
            {
                if(top > -1 && stack[top] == '[') top--;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(top == -1 && !flag) printf("yes\n");
        else printf("no\n");
    }
    return (0);
}