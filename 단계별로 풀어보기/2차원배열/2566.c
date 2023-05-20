#include <stdio.h>

int main()
{
    int arr[9][9] = {0, };
    int max = arr[0][0];
    int x;
    int y;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if(max <= arr[i][j]){
                max = arr[i][j];
                x = i+1;
                y = j+1;
            } 
        }
    }
    printf("%d\n%d %d", max, x, y);
}