#include <stdio.h>

int n;
int arr[501];
int dp[501];

int compare(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int i;
    int j;
    int max;
    int result;
    result = 0;
    scanf("%d", &n);
    i = 0;
    while(++i <= n)
    {
        scanf("%d", &j);
        scanf("%d", &arr[j]);
    }
    i = 0;
    while(++i <= 500)
    {
        if(arr[i] != 0)
        {
            max = 0;
            j = 0;
            while(++j < i)
            {
                if(arr[i] > arr[j] && dp[j] > max)
                {
                    max = dp[j];
                }
            }
            dp[i] = max + 1;
            result = compare(dp[i], result);
        }
    }
    printf("%d\n", n - result);
}
























/*int n;
int tp1[101];
int tp2[101];
int cross[101];
int arr[501][501];
int MIN = 1000000000;
int abs(int a)
{
    return a > 0 ? a : -(a);
}

int main(void)
{
    int i;
    int j;
    int max;
    int max_index;
    int count;
    int max_count;
    scanf("%d", &n);
    i = 0;
    while(++i <= n)
    {
        scanf("%d %d", &tp1[i], &tp2[i]);
    }
    i = 1;
    while(++i <= n)
    {
        j = 0;
        while(++j < i)
        {
            if(abs((tp1[i] - tp1[j]) + (tp2[i] - tp2[j])) != (abs(tp1[i] - tp1[j]) + abs(tp2[i] - tp2[j])))
            {
                cross[i]++;
                cross[j]++;
            }
        }
    }
    count = 0;
    while(1){
        i = 0;
        //while(++i <= n) printf("%d ", cross[i]);
        //printf("\n");
        i = 0;
        max = 0;
        max_index = 0;
        max_count = 0;
        while(++i <= n) 
        { 
            if(cross[i] > max)
            {
                max = cross[i];
                max_index = i;
            }
        }
        i = 0;
        while(++i <= n)
        {
            if(cross[i] == max)
            {
                max_count++;
            }
        }
        //printf("max count = %d\n", max_count);
        if(max == 0) break;
        if(max_count != 1)
        {
            j = 0;
            int temp;
            
            while(++j <= n)
            {
                if(cross[j] == max)
                {
                    i = 0;
                    temp = 0;
                    while(++i <= n)
                    {
                        if(abs((tp1[i] - tp1[j]) + (tp2[i] - tp2[j])) != (abs(tp1[i] - tp1[j]) + abs(tp2[i] - tp2[j])))
                        {
                            temp += cross[i];
                        }
                    }
                    //printf("j = %d temp = %d\n", j, temp);
                    if(temp < MIN)
                    {
                        MIN = temp;
                        max_index = j;
                        //printf("max index = %d\n", max_index);
                    } 
                }
            }
        }
        
        i = 0;
        while(++i <= n)
        {
            if(abs((tp1[i] - tp1[max_index]) + (tp2[i] - tp2[max_index])) != (abs(tp1[i] - tp1[max_index]) + abs(tp2[i] - tp2[max_index])))
            {
                cross[i]--;
            }
        }
        
        tp1[max_index] = 0;
        tp2[max_index] = 0;
        cross[max_index] = 0;
        count++;
    }
    printf("%d\n", count);
    return (0);
}*/


