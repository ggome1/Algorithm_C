#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    while(a != 0 && b != 0 && c != 0)
    {
        if(a * a + b * b == c * c) printf("%s\n", "right");
        else if(a * a == b * b + c * c) printf("%s\n", "right");
        else if(a * a + c * c == b * b) printf("%s\n", "right");
        else printf("%s\n", "wrong");
        scanf("%d %d %d", &a, &b, &c);
    }
}