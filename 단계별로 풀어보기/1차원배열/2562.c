#include <stdio.h>

int main()
{
    int arr[9], max, count=1;
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(int i=1; i<9; i++){
        if(arr[i]>max){
            max=arr[i];
            count=i+1;
        } 
    }
    printf("%d\n", max);
    printf("%d", count);
}