#include <stdio.h>
#include <stdlib.h>

int greed[1001];

int static compare(const void* first, const void* second)
{
    if(*(int *)first > *(int *)second) return 1;
    if(*(int *)first < *(int *)second) return -1;
    return 0;
}
int main(void)
{
    int n;
    int i;
    int sum;
    scanf("%d", &n);
    i = -1;
    while(++i < n) scanf("%d", &greed[i]);
    qsort(greed, n, sizeof(int), compare);
    i = 0;
    sum = greed[0];
    while(++i < n)
    {
        greed[i] += greed[i - 1];
        sum += greed[i];
    }
    printf("%d\n", sum); 
}