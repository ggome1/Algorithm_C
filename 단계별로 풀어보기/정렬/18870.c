#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000001

void merge(int *arr, int left, int middle, int right);

void ms(int *arr, int left, int right);

int unique(int* arr, int size) {
	int i, j = 0;
	for (i = 1; i < size;i++) {
		if (arr[j] == arr[i]) continue;
		arr[++j] = arr[i];
	}
	return ++j;
}

int binarysearch(int* arr, int size, int key) {
	int left = 0, right = size - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] < key) left = mid + 1;
		else if (arr[mid] > key) right = mid - 1;
		else return mid;
 	}
}

int main(){
    int i = -1;
    
    int n;
    scanf("%d", &n);
    int *arr1 = (int *)malloc(sizeof(int) * n);
    int *arr2 = (int *)malloc(sizeof(int) * n);
    while(++i < n){
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    
    
    ms(arr2, 0, n-1);
    
    int count = unique(arr2, n);

    i = -1;
    while(++i < n)
    {
        int ans = binarysearch(arr2, count, arr1[i]);
        printf("%d ", ans);
    }
    

    free(arr1);
    free(arr2);
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