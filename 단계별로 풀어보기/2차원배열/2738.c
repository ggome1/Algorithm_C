#include <stdio.h>

int main()
{
    int col, row;
    scanf("%d %d", &col, &row);
    int arr1[col][row];
    int arr2[col][row];
    int ans[col][row];
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}