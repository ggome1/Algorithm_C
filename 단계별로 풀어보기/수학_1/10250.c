#include <stdio.h>

int main()
{
    int n;
    int h, w;
    int count;
    scanf("%d", &n);
    int res[n];
    int i = -1;
    
    while(++i < n){
        scanf("%d %d %d", &h, &w, &count);
        if(count%h==0){
            res[i] = h*100 + count/h;
        }
        
        else res[i] = (count%h)*100 + count/h + 1;
    }
    i = -1;
    while(++i < n){
        printf("%d\n", res[i]);
    }
}