#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int z = -1;
    int sum = 0;
    int arr[100][100] = {0, };
    while(n--){
        int x;
        int y;
        scanf("%d %d", &x, &y);
        for(int i = x - 1; i < x + 9; i++){
            for(int j = y - 1; j < y + 9; j++){
                if(arr[i][j] != 1) arr[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(arr[i][j] == 1) sum++;
        }
    }
    printf("%d", sum);
}