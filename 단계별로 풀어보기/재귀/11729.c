#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int middle, int end)
{
    if (n == 1){
        printf("%d %d\n", start, end);
        return;
    }
    hanoi(n-1, start, end, middle);
    printf("%d %d\n", start, end);
    hanoi(n-1, middle, start, end);
}


int main()
{
    int n;
    scanf("%d", &n);
    int count = pow(2, n) - 1;
    printf("%d\n", count);
    hanoi(n, 1, 2, 3);
}