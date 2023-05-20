#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int n;
    scanf("%d", &n);
    a = 1;
    b = 2;
    while(--n)
    {
        c = a + b;
        if(c >= 15746) c -= 15746;
        a = b;
        b = c;
    }
    printf("%d\n", a);
    return (0);
}
// 질문하기!