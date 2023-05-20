#include <iostream>

using namespace std;

long long n;
long long mod = 1000000007;
long long temp[3][3];
long long arr[3][3];
long long ans[3][3];
int i;
int j;
int z;

void mm(long long arr1[3][3], long long arr2[3][3]) // 행렬의 곱
{
    
    
    i = -1;
    while(++i < 2)
    {
        j = -1;
        while(++j < 2)
        {
            temp[i][j] = 0;
            z = -1;
            while(++z < 2)
            {
                temp[i][j] += (arr1[i][z] * arr2[z][j]) % mod;
            }
            temp[i][j] %= mod;
        }
    }
    i = -1;
    while(++i < 2)
    {
        j = -1;
        while(++j < 2) arr1[i][j] = temp[i][j];
    }
    return;
}

void dc(long long n)
{
    while(n > 0)
    {
        if(n % 2) mm(ans, arr);
        mm(arr, arr);
        n /= 2;
    }
    return;
}

int main(void)
{
    long long n;
    arr[0][1] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    ans[0][0] = 1;
    ans[1][1] = 1;
    cin >> n;
    dc(n);
    cout << ans[0][1] << '\n';
    return (0);
}