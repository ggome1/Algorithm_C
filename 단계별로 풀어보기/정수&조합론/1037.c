#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main(void)
{
    int n;
    int i;
    scanf("%d", &n);
    int arr[n];

    i = -1;
    while(++i < n)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    printf("%d", arr[0] * arr[n-1]);
}