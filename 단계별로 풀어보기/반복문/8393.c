#include <stdio.h>
int factorial(int n, int result);
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n, 0));
}
int factorial(int n, int result){
    
    if(n==0) return result;
    result +=n;
    factorial(n-1, result);
}