#include <stdio.h>

int main()
{
    int n;
    int count = 1;
    int sum = 2;
    scanf("%d", &n);
    int i = 0;
    if(n==1){
        printf("%d", count);
        return 0;
    } 
    while(++i!=-1){
        sum += 6*i;
        if(n<sum) break;
        count++;
    }
    printf("%d", count+1);
}