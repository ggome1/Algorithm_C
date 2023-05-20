#include <stdio.h>

int main()
{
    int n, scan;
    
    scanf("%d %d", &n, &scan);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]<scan) printf("%d ", arr[i]);
    }
    
}