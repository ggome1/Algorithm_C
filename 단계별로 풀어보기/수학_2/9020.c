#include <stdio.h>

int prime(int n);

int main()
{
    int arr[10001];
    int n;
    int count;
    scanf("%d", &count);
    int w = -1;
    while(++w < count){
    arr[0] = 2;
    scanf("%d", &n);
    int j = 1;
    for(int i = 3; i < n; i+=2){
        if(prime(i)){
            arr[j] = i;
            j++;
        }
    }
    int a;
    int b;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(n/2==arr[i]){
            a = i; 
            b = i;
            break;
        } 
        else if(n/2<arr[i]){
            b = i;
            a = i-1;
            break;
        }
    }
    while(arr[a]+arr[b] != n){
        if(arr[a]+arr[b]<n) b++;
        else if(arr[a]+arr[b]>n) a--;
    }
    printf("%d %d\n", arr[a], arr[b]);
    }
}

int prime(int n)
{
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i = 3; i*i <= n; i+=2){
        if(n % i == 0) return 0;
    }
    return 1;
}