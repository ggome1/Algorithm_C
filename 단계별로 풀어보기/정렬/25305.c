#include <stdio.h>

int qs(int arr[], int left, int right);
int swap(int arr[], int pl, int pr);

int main()
{
    int n;
    int cut;
    scanf("%d %d", &n, &cut);
    int arr[n];
    int i = -1;
    while(++i < n){
        scanf("%d", &arr[i]);
    }
    qs(arr, 0, n-1);

    printf("%d", arr[n-cut]);
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
        else if(pl == pr){
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