#include <stdio.h>
#include <string.h>

char greed[51];
int sum;

int main(void)
{
    int len;
    int now;
    int i;
    int flag;
    scanf("%s", greed);
    len = strlen(greed);
    now = 0;
    flag = 0;
    i = -1;
    while(++i < len)
    {
        if(greed[i] == '-')
        {
            if(flag == 0) sum += now;
            else sum -= now;
            now = 0;
            flag = 1;
        }

        else if(greed[i] == '+')
        {
            if(flag == 0) sum += now;
            else sum -= now;
            now = 0;
        }

        else
        {
            now *= 10;
            now += greed[i] - '0';
        }
    }
    if(flag == 0) sum += now;
    else sum -= now;
    printf("%d\n", sum);
}