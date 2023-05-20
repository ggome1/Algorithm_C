#include <stdio.h>

int Euclidean(int a, int b)
{
    int r = a % b;
    if (r == 0) {
      return b;
    }
    return Euclidean(b, r);
}

int main(void)
{
    int n;
    int i;
    int euc;
    scanf("%d", &n);
    int ring[n];
    i = -1;
    while(++i < n) scanf("%d", &ring[i]);
    i = 0;
    while(++i < n)
    {
        euc = Euclidean(ring[0], ring[i]);
        printf("%d/%d\n", ring[0] / euc, ring[i] / euc);
    }
    return (0);
}