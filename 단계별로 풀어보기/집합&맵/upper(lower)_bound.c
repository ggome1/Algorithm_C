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