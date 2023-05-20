#include <stdio.h>
int jud(int num);
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int i = -1;
    int num;
    while(++i < n){
        scanf("%d", &num);
        count+=jud(num);
    }
    printf("%d\n", count);
}

int jud(int num){
    if(num <= 1) return 0; // 1 이하면 소수 x
    if(num == 2) return 1; // 2라면 소수
    if(num % 2 == 0) return 0; // 2의 배수면 소수 x
    for(int i = 3; i*i <= num; i+=2){ // 홀수라면 3부터 그 수의 루트 씌운 값 까지
        if(num % i == 0) return 0;    // 그 수와 나누어 떨어지면 소수 x
    }
    return 1; // 나머지 소수
}