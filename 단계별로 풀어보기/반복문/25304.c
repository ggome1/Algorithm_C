#include <stdio.h>

int main(){
    int total, tno, price, count, sum=0;
    scanf("%d %d", &total, &tno);
    for(int i=0; i<tno; i++){
        scanf("%d %d", &price, &count);
        sum+=price*count;
    }
    if(sum==total) printf("Yes");
    else printf("No");
}