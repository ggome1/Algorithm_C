#include <stdio.h>
#include <stdlib.h>

int binarysearch(int* arr, int size, int key)
{
	int left = 0, right = size - 1, mid;
	while (left <= right) 
	{
		mid = (left + right) / 2;
		if (arr[mid] < key) left = mid + 1;
		else if (arr[mid] > key) right = mid - 1;
		else
        {
            return 1;
        } 
 	}
    return 0;
}

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
    int m;
    scanf("%d %d", &n, &m);
    int i;
    int temp_n = n;
    int temp_m = m;
    int A[n];
    int B[m];
    i = -1;
    while(++i < n) scanf("%d", &A[i]);
    i = -1;
    while(++i < m) scanf("%d", &B[i]);
    qsort(A, n, sizeof(int), compare);
    qsort(B, m, sizeof(int), compare);
    i = -1;
    while(++i < n)
        temp_n -= binarysearch(B, m, A[i]);
    i = -1;
    while(++i < m)
        temp_m -= binarysearch(A, n, B[i]);
    printf("%d\n", temp_n + temp_m);

}