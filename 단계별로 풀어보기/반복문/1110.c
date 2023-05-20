#include <stdio.h>

int main(){
    int num, num2,new, count=0;
    
    scanf("%d",&num);
    num2=num;
    while(1){
        count++;
        new=num2/10+num2%10;
        num2=(num2%10)*10+new%10;
        if(num==num2) break;
    }
    printf("%d",count);
}