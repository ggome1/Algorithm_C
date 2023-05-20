#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    i = 0;
    while(++i < n)
    {
        int sum;
        int temp_n = i;
        sum = 0;
        while(temp_n > 0)
        {
            sum += temp_n % 10;
            temp_n /= 10;
        }
        if(i + sum == n)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", 0);
    return 0;
}