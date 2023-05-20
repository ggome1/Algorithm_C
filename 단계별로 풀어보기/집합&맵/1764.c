#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;

typedef struct char_raw
{
    char name[21];
}char_raw;

void binarysearch(char_raw* arr, int size, char* key, char_raw* arr2) 
{
	int left = 0, right = size - 1, mid;
    
	while (left <= right) 
    {
		mid = (left + right) / 2;
		if (strcmp(arr[mid].name, key) < 0) left = mid + 1;
		else if (strcmp(arr[mid].name, key) > 0) right = mid - 1;
		else
        {
            strcpy(arr2[count].name, arr[mid].name);
            count++;
            return ;
        } 
 	}
    return;
}

int static compare (const void* first, const void* second)
{
    char_raw *pf = (char_raw*)first;
    char_raw *ps = (char_raw*)second;
    return strcmp(pf->name, ps->name);
}

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int i;
    char_raw listen[n];
    char_raw see[m];
    char_raw ls[m];
    i = -1;
    while(++i < n)
        scanf("%s", listen[i].name);
    
    i = -1;
    while(++i < m)
        scanf("%s", see[i].name);
    
    qsort(listen, n, sizeof(char_raw), compare);
    i = -1;

    while(++i < m)
    {
        binarysearch(listen, n, see[i].name, ls);
    }

    i = -1;
    printf("%d\n", count);
    qsort(ls, count, sizeof(char_raw), compare);
    while(++i < count)
    {
        printf("%s\n", ls[i].name);
    }
    
    
    
}