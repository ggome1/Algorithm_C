#include <stdio.h>

int prime(int n);

int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        int count = 0;
        if(n==0) break;
        int i = n;
        while(++i <= n * 2){
            if(prime(i)) count++;
        }
        printf("%d\n", count);
    }
}

int prime(int n)
{
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i = 3; i*i <= n; i+=2){
        if(n % i == 0) return 0;
    }
    return 1;
}