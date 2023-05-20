#include <stdio.h>

int main()
{
    long long unsigned int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(b>=c){
        printf("%d", -1);
        return 0;
    }
    printf("%lld", a/(c-b)+1);

}