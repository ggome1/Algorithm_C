#include <stdio.h>
#include <stdlib.h>


int lower_bound(int* arr, int key, int size)
{
    int first;
    int end;
    first = 0;
    end = size - 1;

    while(first < end)
    {
        int mid;
        mid = (first + end) / 2;
        if(arr[mid] >= key) end = mid;
        else first = mid + 1;
    }
    return end;
}

int upper_bound(int* arr, int key, int size)
{
    int first;
    int end;
    first = 0;
    end = size - 1;

    while(first < end)
    {
        int mid;
        mid = (first + end) / 2;
        if(arr[mid] > key) end = mid;
        else first = mid + 1;
    }
    if(arr[end] == key)
    {
        end++;
    }
    return end;
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

int binarysearch(int* arr, int size, int key) 
{
	int left = 0, right = size - 1, mid;
    int sum = 0;
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

int main()
{
    int n;
    scanf("%d", &n);
    int card[n];
    int card_size = sizeof(card) / sizeof(int);
    int i;
    i = -1;
    while(++i < n)
    {
        scanf("%d", &card[i]);
    }
    qsort(card, card_size, sizeof(int), compare);
    int m;
    
    scanf("%d", &m);
    int find[m];
    i = -1;
    while(++i < m)
    {
        scanf("%d", &find[i]);
    }
    i = -1;
    while(++i < m)
    {
        printf("%d ", upper_bound(card, find[i], n) - lower_bound(card, find[i], n));
    }
    printf("\n");
    return 0;
}