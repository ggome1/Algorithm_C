#include <stdio.h>

int main()
{
    int n, count;
    count = 0;
    scanf("%d", &n);
    if(n >= 100)
    {
        count = 99;
        for(int i = 100; i <= n; i++)
        {
            if((i/100 - (i%100)/10)==((i%100)/10 - i%10)) count++;
        }
    } 
    else count = n;
    printf("%d", count);   
}