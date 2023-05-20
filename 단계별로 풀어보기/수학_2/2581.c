#include <stdio.h>
int prime(int n);
int main()
{
    int first;
    int last;
    int sum = 0;
    int min = 0;
    scanf("%d %d", &first, &last);
    int i = first - 1;
    while(++i <= last){
        if(prime(i)){
            sum += i;
            if(min == 0) min = i;
        }
    }
    if(sum==0) printf("%d", -1);
    else{
        printf("%d\n%d", sum, min);
    }
}

int prime(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i = 3; i*i <= n; i+=2){
        if(n % i == 0) return 0;
    }
    return 1;
}