#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char str[51];
    int len;
}str;
void merge(str *arr, int left, int middle, int right);
void ms(str *arr, int left, int right);

int main(){
  int i = -1;
  
  int n;
  scanf("%d", &n);
  str *arr = (str *)malloc(sizeof(str) * n);
  while(++i < n){
    scanf("%s", arr[i].str);
    arr[i].len = strlen(arr[i].str);
  }

  
  ms(arr, 0, n-1);
  
  printf("%s\n", arr[0].str);
  for(i=1; i<n; i++){
    if(strcmp(arr[i-1].str, arr[i].str) != 0)
        printf("%s\n", arr[i].str);
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
        if(arr[i].len < arr[j].len){
            sort[k++] = arr[i++];
        }
        else if(arr[i].len > arr[j].len){
            sort[k++] = arr[j++]; 
        }
        else{
            if (strcmp(arr[i].str, arr[j].str) < 0){
                sort[k++] = arr[i++];
            }
            else{
                sort[k++] = arr[j++];
            }
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