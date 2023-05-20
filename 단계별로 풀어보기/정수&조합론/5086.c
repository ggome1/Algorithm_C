#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    while(n != 0 && m != 0)
    {
        if(m % n == 0) printf("%s\n", "factor");
        else if(n % m == 0) printf("%s\n", "multiple");
        else printf("%s\n", "neither");
        scanf("%d %d", &n, &m);
    }
    return (0);
}