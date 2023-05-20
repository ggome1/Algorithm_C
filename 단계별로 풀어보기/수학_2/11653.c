#include <stdio.h>
int prime(int n);
int main()
{
    int n;
    scanf("%d", &n);
    while(prime(n)){
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                n/=i;
                printf("%d\n", i);
                break;
            }
        }
    }
    if(n!=1)
    printf("%d", n);
   
}

int prime(int n){
    if(n==1) return 0;
    if(n==2) return 0;
    if(n%2==0) return 1;
    for(int i = 3; i*i <= n; i+=2){
        if(n % i == 0) return 1;
    }
    return 0;
}