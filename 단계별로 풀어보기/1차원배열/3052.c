#include <stdio.h>

int main()
{
    int n, arr[10], count=0;
    for(int i=0; i<10; i++){
        int jud=0;
        arr[i] = -1;
        scanf("%d", &n);
        for(int j=0; j<i+1; j++){
            if(arr[j]==n%42) {
                jud = 1;
                break;
            }
        }
        if(jud==1) continue;
        arr[i] = n%42;
        count++;
    }
    
    printf("%d", count); 

}