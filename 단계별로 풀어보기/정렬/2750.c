#include <stdio.h>

int quicksort(int data[], int left, int right);
int swap(int data[], int pl, int pr);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i = -1;
    while(++i < n){
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, sizeof(arr)/sizeof(arr[0])-1);

    for(int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++){
        printf("%d\n", arr[j]);
    }
}

int quicksort(int data[], int left, int right){
    int pl = left;
    int pr = right;
    int pivot = data[(pl + pr) / 2];
    do{
        while(data[pl] < pivot) pl++;
        while(data[pr] > pivot) pr--;
        if(pl <= pr){
            swap(data, pl++, pr--);
        }
    }while(pl <= pr);
    if(left < pr) quicksort(data, left, pr);
    if(right > pl) quicksort(data, pl, right);
}

int swap(int data[], int pl, int pr){
    int temp;
    temp = data[pl];
    data[pl] = data[pr];
    data[pr] = temp;
}
