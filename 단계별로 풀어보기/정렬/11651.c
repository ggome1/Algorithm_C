#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000001

typedef struct xy {
    int x;
    int y;
}xy;

void merge(xy *arr, int left, int middle, int right);
void ms(xy *arr, int left, int right);

int main()
{
    int n;
    scanf("%d", &n);
    xy* sort = (xy*)malloc(sizeof(xy) * n);

    int i = -1;
    while(++i < n){
        scanf("%d %d", &sort[i].x, &sort[i].y);
    }
    ms(sort, 0, n-1);

    i = -1;
    while(++i < n){
        printf("%d %d\n", sort[i].x, sort[i].y);
    }
    free(sort);
}
void merge(xy *arr, int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = 0;
    xy *sort = (xy *)malloc(sizeof(xy) * (right - left +1));
    while(i <= middle && j <= right){
        if(arr[i].y <= arr[j].y){
            if(arr[i].y == arr[j].y){
                if(arr[i].x < arr[j].x){
                    sort[k++] = arr[i++];
                }
                else sort[k++] = arr[j++];
            }
            else{
                sort[k++] = arr[i++];
            }
        }
        else{
            sort[k++] = arr[j++]; 
        }
    }

    if(i > middle){
        for(int t = j; t <= right; t++){
            sort[k++] = arr[t];
        }
    }
    else{
        for(int t = i; t <= middle; t++){
            sort[k++] = arr[t];
        }
    }
    i = left;
    k = 0;
    while (i <= right) arr[i++] = sort[k++];

    free(sort);
}

void ms(xy *arr, int left, int right)
{
    if(left < right){
        int middle = (left + right) / 2;
        ms(arr, left, middle);
        ms(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}


