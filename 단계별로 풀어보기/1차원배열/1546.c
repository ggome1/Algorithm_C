#include <stdio.h>

int main()
{
    int n;
    float max, sum=0;
    scanf("%d", &n);
    float arr[n];
    for(int i=0; i<n; i++) scanf("%f", &arr[i]);
    max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max) max = arr[i];
    } 
    for(int i=0; i<n; i++){
        sum+=arr[i]/max*100;
    }
    printf("%f", sum/n);
}