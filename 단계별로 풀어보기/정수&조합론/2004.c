#include <stdio.h>
#define min(a, b) (a < b ? a : b)

long long int i;

int fivec(int n)
{
    int count;
    count = 0;
    for(i = 5; n / i >= 1; i *=5)
    {
        count += n / i;
    }
    return (count);
}

int twoc(int n)
{
    int count;
    count = 0;
    for(i = 2; n / i >= 1; i *=2)
    {
        count += n / i;
    }
    return (count);
}

int main()
{
    
    int n;
    int r;
    int five;
    int two;
    five = 0;
    two = 0;
    scanf("%d %d", &n, &r);
    
    five += fivec(n);
    if(r != 0) five -= fivec(r);
    if(n != r) five -= fivec(n - r);

    two += twoc(n);
    if(r != 0) two -= twoc(r);
    if(n != r) two -= twoc(n - r);

    printf("%d\n", min(two, five));

    return(0);
}