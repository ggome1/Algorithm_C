#include <stdio.h>

int qs(int arr[], int left, int right);
int swap(int arr[], int pl, int pr);

int main()
{
    int n = 5;
    int i = -1;
    int arr[n];
    int sum = 0;
    while(++i < n){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qs(arr, 0, n-1);
    i = -1;
    printf("%d\n%d", sum/n, arr[n/2]);
    
}

int qs(int arr[], int left, int right)
{
    int pl = left;
    int pr = right;
    int pivot = arr[(pl + pr) / 2];
    do{
        while(arr[pl] < pivot) pl++;
        while(arr[pr] > pivot) pr--;
        if(pl < pr) swap(arr, pl++, pr--);
        if(pl == pr){
            pl++;
            pr--;
        }
    }while(pl <= pr);
    
    if(pl < right) qs(arr, pl, right);
    if(pr > left) qs(arr, left, pr);
}

int swap(int arr[], int pl, int pr)
{
    int temp;
    temp = arr[pl];
    arr[pl] = arr[pr];
    arr[pr] = temp;
}