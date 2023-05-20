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
    int m;
    int count;
    int temp;
    int i;
    i = -1;
    scanf("%d", &count);
    while(++i < count)
    {
       scanf("%d %d", &n, &m);
        if(n < m)
        {
            temp = n;
            n = m;
            m = temp;
        } 
    printf("%d\n", n * m / Euclidean(n, m));
    }
    return (0);
}