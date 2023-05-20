#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = -1;
    int res[n];
    while(++i < n){
        int floor, ho;
        scanf("%d", &floor);
        scanf("%d", &ho);
        int arr[ho];
        int j = -1;
        while(++j < ho) arr[j] = j+1;
        int z = -1;
        while(++z < floor){
            int w = -1;
            int sum = 0;
            while (++w < ho){
                sum+=arr[w];
                arr[w] = sum;
            }
        }
        res[i] = arr[ho-1];
    }
    for(int a=0; a<n; a++) printf("%d\n", res[a]);
}