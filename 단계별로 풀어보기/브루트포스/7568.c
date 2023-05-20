#include <stdio.h>

typedef struct
    {
        int tall;
        int weight;
        int grade;
    } person;
    
int main()
{
    int n;
    scanf("%d", &n);
    person arr[n];
    int i = -1;
    while(++i < n)
    {
        arr[i].grade = 1;
        scanf("%d %d", &arr[i].weight, &arr[i].tall);
    }
    i = -1;
    while(++i < n)
    {
        int j;
        j = i;
        while(++j < n)
        {
            if(arr[i].weight < arr[j].weight && arr[i].tall < arr[j].tall)
            {
                arr[i].grade++;
            }
            else if(arr[i].weight > arr[j].weight && arr[i].tall > arr[j].tall)
            {
                arr[j].grade++;
            }
        }
    }
    i = -1;
    while(++i < n)
    {
        printf("%d ", arr[i].grade);
    }


}   