#include <stdio.h>

int main()
{
    int arr[30], n1, n2, scan;
    for(int i=0; i<30; i++) arr[i] = i+1;
    for(int i=0; i<28; i++){
        scanf("%d", &scan);
        arr[scan-1] = 0;
    }
    for(int i=0; i<30; i++){
        if(arr[i]!=0 && arr[0]==0) arr[0] = arr[i];
        else if(arr[i]!=0) arr[1] = arr[i];
    } 
    if(arr[0]<arr[1]) printf("%d\n%d",arr[0], arr[1]);
    else printf("%d\n%d",arr[1], arr[2]);
}