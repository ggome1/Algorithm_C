#include <stdio.h>

int main()
{
    int n, scan, count=0;
    
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &scan);
    for(int i=0; i<n; i++){
        if(arr[i]==scan) count++;
    }
    printf("%d", count);
}