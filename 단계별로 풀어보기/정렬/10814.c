#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[101];
    int age;
}str;
void merge(str *arr, int left, int middle, int right);
void ms(str *arr, int left, int right);

int main(){
  int i = -1;
  
  int n;
  scanf("%d", &n);
  str *arr = (str *)malloc(sizeof(str) * n);
  while(++i < n){
    scanf("%d %s", &arr[i].age, arr[i].name);
  }

  
  ms(arr, 0, n-1);
  
  for(i=0; i<n; i++){
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
  free(arr);
  return 0;
}

void merge(str *arr, int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = 0;
    str *sort = (str *)malloc(sizeof(str) * (right - left +1));
    while(i <= middle && j <= right){
        if(arr[i].age <= arr[j].age){
            sort[k++] = arr[i++];
        }
        else if(arr[i].age > arr[j].age){
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

void ms(str *arr, int left, int right)
{
    if(left < right){
        int middle = (left + right) / 2;
        ms(arr, left, middle);
        ms(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}