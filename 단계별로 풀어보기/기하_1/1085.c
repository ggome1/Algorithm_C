#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int w;
    int h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    w -= x;
    h -= y;

    if(w < x) x = w;
    if(h < y) y = h;
    if(x < y) printf("%d", x);
    else printf("%d", y);
    return 0;
}