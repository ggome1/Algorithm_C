#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000001
void merge(int *arr, int left, int middle, int right, int t);
void ms(int *arr, int left, int right, int count);
int count = 0;
void cnt(){
    count++;
}
int num;
int main(){
  int i = -1;
  
  int n;
  int t;
  scanf("%d %d", &n, &t);
  int *arr = (int *)malloc(sizeof(int) * n);
  while(++i < n){
    scanf("%d", &arr[i]);
  }

  ms(arr, 0, n-1, t);
  if(count < t) printf("%d", -1);
  
  free(arr);
  return 0;
}

void merge(int *arr, int left, int middle, int right, int w)
{
    int i = left;
    int j = middle + 1;
    int k = 0;
    int *sort = (int *)malloc(sizeof(int) * (right - left +1));
    while(i <= middle && j <= right){
        if(arr[i] <= arr[j]){
            
            sort[k++] = arr[i++];
            
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
    while (i <= right){
        arr[i++] = sort[k++];
        if(++count == w) printf("%d", arr[i-1]);
    }

    free(sort);
}

void ms(int *arr, int left, int right, int count)
{
    if(left < right){
        int middle = (left + right) / 2;
        ms(arr, left, middle, count);
        ms(arr, middle + 1, right, count);
        merge(arr, left, middle, right, count);
    }
}