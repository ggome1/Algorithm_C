#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 1000001

void merge(int *arr, int left, int middle, int right);
void ms(int *arr, int left, int right);

int main(){
  int i = -1;
  int count[8001] = {0, };
  int bin[8001] = {0, };
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(sizeof(int) * n);
  while(++i < n){
    scanf("%d", &arr[i]);
  }
  ms(arr, 0, n-1);

  int sum = 0;
  for(i=0; i<n; i++){
    count[arr[i]+4000]++;
    sum+=arr[i];
  }
  int many = count[0];
  for(int z = 1; z < 8001; z++){
    if(count[z] > many) many = count[z];
  }
  int w = 0;
  for(int z = 0; z < 8001; z++){
    if(count[z] == many){
        bin[w] = z-4000;
        w++;
    }
  }
  
  printf("%d\n", (int) round(sum / (double)n));
  printf("%d\n", arr[(n-1) / 2]);
  if(w == 1){
    printf("%d\n", bin[0]);
  }
  else printf("%d\n", bin[1]);
  printf("%d\n", arr[n-1]-arr[0]);
  free(arr);
  return 0;
}

void merge(int *arr, int left, int middle, int right)
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
    while (i <= right) arr[i++] = sort[k++];

    free(sort);
}

void ms(int *arr, int left, int right)
{
    if(left < right){
        int middle = (left + right) / 2;
        ms(arr, left, middle);
        ms(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}