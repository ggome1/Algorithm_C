#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int x1;
    int x2;
    int r1;
    int y1;
    int y2;
    int r2;
    scanf("%d", &n);
    int arr[n];
    int i;
    i = -1;
    while(++i < n)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        double distance;
        double jud;
        jud = r1 > r2 ? r1 - r2 : r2 - r1;
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
        if(distance == 0 && r1 == r2) arr[i] = -1;
        else if(r1 + r2 > distance && distance > jud) arr[i] = 2;
        else if(r1 + r2 == distance || distance == jud) arr[i] = 1;
        else arr[i] = 0;

    }
    i = -1;
    while(++i < n) printf("%d\n", arr[i]);
}