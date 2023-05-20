#include <stdio.h>

int f[41];
int cnt;

int fib(int n) {
    if (n == 1 || n == 2) return 1;  
    else
    {
        cnt++;
        return (fib(n - 1) + fib(n - 2));
    } 
}

void fibonacci(int n) {
    int i;
    f[1] = 1;
    f[2] = 1;
    i = 2;
    while (++i <= n)
    {
        cnt++;
        f[i] = f[i - 1] + f[i - 2];  
    } 
    return;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    printf("%d %d", f[n], n - 2);
    return (0);
}