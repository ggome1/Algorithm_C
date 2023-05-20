#include <stdio.h>
#include <string.h>

int main()
{
    int n, count, sum=0;
    scanf("%d", &n);
    char qu[80];
    int res[n];
    for(int i=0; i<n; i++){
        count = 0;
        sum=0;
        scanf("%s", qu);
        for(int j=0; j<strlen(qu); j++){
            if(qu[j] == 79){
                count++;
                sum += count;
            }
            else{
                count = 0;
            }
        }
        res[i] = sum;
    }
    for(int i=0; i<n; i++) printf("%d\n", res[i]);
}