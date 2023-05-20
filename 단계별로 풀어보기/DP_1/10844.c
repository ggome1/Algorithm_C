#include <stdio.h>

int arr[101][10];

int main(void)
{
    
    int n;
    int i;
    int j;
    int sum;
    scanf("%d", &n);
    
    i = 0;
    while(++i <= 9) arr[1][i] = 1;

    i = 1;
    while(++i <= n)
    {
        arr[i][0] = arr[i - 1][1];
        arr[i][9] = arr[i - 1][8];
        j = 0;
        while(++j < 9)
        {
            arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
        } 
    }
    
    i = -1;
    sum = 0;
    while(++i <= 9)
    {
        sum += arr[n][i];
        sum %= 1000000000;
    } 
        
    printf("%d\n", sum % 1000000000);
    
    return (0);
}