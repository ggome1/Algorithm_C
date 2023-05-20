#include <stdio.h>
#include <stdlib.h>

int res[100000];
int count;

int abs(int n)
{
    return (((n) > 0) ? (n): -(n));
}

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

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
    int i;
    int euc;
    euc = 1000000000;
    scanf("%d", &n);
    int arr[n];
    int arr2[n-1];
    
    i = -1;
    while(++i < n) scanf("%d", &arr[i]);
    i = -1;
    while(++i < n - 1)
    {
        arr2[i] = abs(arr[i] - arr[i + 1]);
    } 
    i = -1;
    if(n > 2)
    {
        while(++i < n - 2)
        {
            if(euc > Euclidean(arr2[i], arr2[i + 1]))
            {
                euc = Euclidean(arr2[i], arr2[i + 1]);
            }
        }
        i = 2;
        while(i * i <= euc)
        {
            if(euc % i == 0)
            {
                if(i != euc / i)
                {
                    res[count++] = i;
                    res[count++] = euc / i;
                }
                else
                {
                    res[count++] = i;
                } 
            }
            i++;
        }
        res[count++] = euc; 
    }
    else
    {
        euc = abs(arr[0] - arr[1]);
        i = 2;
        while(i * i <= euc)
        {
            if(euc % i == 0)
            {
                if(i != euc / i)
                {
                    res[count++] = i;
                    res[count++] = euc / i;
                }
                    
                else res[count++] = i;
            }
            i++;
        }
        res[count++] = euc; 
    }
    i = -1;
    qsort(res, count, sizeof(int), compare);
    while(++i < count - 1) printf("%d ", res[i]);
    printf("%d\n", res[count - 1]);
    return (0);
}