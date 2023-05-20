#include <stdio.h>

int main()
{
    int n;
    int limit;
    scanf("%d %d", &n, &limit);
    int arr[n];
    int i;
    i = -1;
    int max;
    max = 0;
    while(++i < n)
    {
        scanf("%d", &arr[i]);
    }
    
    i = -1;
    int sum;
    while(++i < n){
        int j;
        j = i;
        while(++j < n){
            int k;
            k = j;
            if(i == j) continue;
            if(max == limit) break;
            while(++k < n){
                if(j == k || k == i) continue;
                sum = arr[i] + arr[j] + arr[k];
                if(max == limit) break;
                if(sum > max && sum <= limit){
                    max = sum;
                    if(max == limit) break;
                    
                }
            }
        }
    }
    printf("%d\n", max);

}