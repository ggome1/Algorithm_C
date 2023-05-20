#include <stdio.h>

int factorial(int a);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));

}

int factorial(int a){
    int result = 1;
    if(a <= 1){
        return 1;
    }
    else{
        return a * factorial(a - 1);
    }
}
    