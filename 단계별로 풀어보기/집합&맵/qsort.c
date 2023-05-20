#include <stdio.h>
#include <stdlib.h>
// int 형 배열 qsort
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr_size = sizeof(arr) / sizeof(int);
    qsort(arr, arr_size, sizeof(int), compare);
}

#include <stdio.h>
#include <stdlib.h>
// char* 형 배열 qsort
typedef struct
{
    char    name[501];
}charraw;

int count = 0;

int static compare (const void* first, const void* second)
{
    charraw *pf = (charraw*)first;
    charraw *ps = (charraw*)second;
    return strcmp(pf->name, ps->name);
}

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][21];
    int arr_size = sizeof(arr) / sizeof(char);
    qsort(arr, arr_size, sizeof(int), compare);
}