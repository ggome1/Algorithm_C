#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str
{
    char name[21];
    int i;
}str;

int binarysearch(str* arr, int size, char* key) 
{
	int left = 0, right = size - 1, mid;
    int sum = 0;
	while (left <= right) 
    {
		mid = (left + right) / 2;
		if (strcmp(arr[mid].name, key) < 0) left = mid + 1;
		else if (strcmp(arr[mid].name, key) > 0) right = mid - 1;
		else
        {
            return arr[mid].i;
        } 
 	}
    return 0;
}