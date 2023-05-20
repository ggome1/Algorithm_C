#include <stdio.h>
#include <math.h>

typedef struct coord
{
    int x;
    int y;
    int r;
}coord;

int main(void)
{
    int n;
    int i;
    scanf("%d", &n);
    int arr[n];
    i = -1;
    while(++i < n)
    {
        int x1;
        int x2;
        int y1;
        int y2;
        int m;
        int j;
        int count;
        double distance1;
        double distance2;

        count = 0;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &m);

        coord coord[m];

        j = -1;
        while(++j < m)
        {
            scanf("%d %d %d", &coord[j].x, &coord[j].y, &coord[j].r);
        }
        
        j = -1;
        while(++j < m)
        {
            distance1 = sqrt(pow(x1 - coord[j].x, 2) + pow(y1 - coord[j].y, 2));
            distance2 = sqrt(pow(x2 - coord[j].x, 2) + pow(y2 - coord[j].y, 2));

            if(distance1 < coord[j].r && distance2 > coord[j].r) count++;
            if(distance2 < coord[j].r && distance1 > coord[j].r) count++;
        }
        arr[i] = count;
    }
    i = -1;
    while(++i < n) printf("%d\n", arr[i]);
}