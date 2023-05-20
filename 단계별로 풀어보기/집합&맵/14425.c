#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int binarysearch(charraw* arr, int size, char* key) 
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
            return 1;
        } 
 	}
    return 0;
}

int main()
{
    int     n;
    int     m;
    scanf("%d %d", &n, &m);
    int i;
    charraw c_raw1[n];
    charraw c_raw2[m];
    i = -1;
    while(++i < n)
        scanf("%s", c_raw1[i].name);
    i = -1;
    while(++i < m)
        scanf("%s", c_raw2[i].name);

    qsort(c_raw1, n, sizeof(c_raw1[0]), compare);
    i = -1;
    while(++i < m)
    {
        count += binarysearch(c_raw1, n, c_raw2[i].name);
    }
    printf("%d\n", count);
}

