#include <stdio.h>
#include <string.h>

int main()
{
    char num[11];
    int temp[11] = {0, };
    int n;
    scanf("%s", num);
    int len = strlen(num);
    int i = -1;
    while(++i < len){
        temp[num[i] - '0']++;
    }

    for(int j = 9; j > -1; j--){
        for(int z = 0; z < temp[j]; z++){
            printf("%d", j);
        }
    }

}