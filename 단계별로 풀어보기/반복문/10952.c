#include <stdio.h>
#define MAX 1000000
int main()
{
    int a, b, count=0;
    int arr[MAX];
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) break;
        arr[count] = a+b;
        count++;
    }
    for(int i=0; i<count; i++) printf("%d\n", arr[i]);
}