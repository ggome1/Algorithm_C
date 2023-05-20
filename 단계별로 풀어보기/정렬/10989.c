#include <stdio.h>
#define MAX 10001



int main()
{
    int n;
    scanf("%d", &n);
    int arr[MAX] = {0, };
    int temp;
    int i = -1;
    while(++i < n){
         scanf("%d", &temp);
         arr[temp]++;
    }
    i = -1;
    while(++i < MAX){
        if(arr[i] !=0){
            for(int j = 0; j < arr[i]; j++) printf("%d\n", i);
        }   
    }
}

