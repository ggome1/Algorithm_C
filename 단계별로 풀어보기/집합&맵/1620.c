#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct poke
{
    char name[21];
    int i;
}poke;

int binarysearch(poke* arr, int size, char* key) 
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

int judgeint(char* str)
{
    if('0' <= str[0] && str[0] <= '9') return 1;
    else
        return 0;
}

int static compare (const void* first, const void* second)
{
    poke *pf = (poke*)first;
    poke *ps = (poke*)second;
    return strcmp(pf->name, ps->name);
}

int main(){
    struct poke *poke;
    struct poke *temp;

    int n;
    int m;
    scanf("%d %d", &n, &m);

    poke = (struct poke*)malloc(sizeof(struct poke) * n);
    temp = (struct poke*)malloc(sizeof(struct poke) * m);

    int i;
    i = -1;
    while(++i < n)
    {
        scanf("%s", poke[i].name);
        poke[i].i = i + 1;
        strcpy(temp[i].name, poke[i].name);
        temp[i].i = i + 1;
    }

    qsort(poke, n, sizeof(poke[0]), compare);

    i = -1;
    while(++i < m)
    {
        char search[21];
        scanf("%s", search);
        if(judgeint(search))
        {
            printf("%s\n", temp[atoi(search) - 1].name);
        }
        else
        {
            printf("%d\n", binarysearch(poke, n, search));
        }

    }
    return 0;
}