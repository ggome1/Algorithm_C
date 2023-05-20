#include <iostream>

using namespace std;

long long arr[6][6];
long long temp[6][6];
long long ans[6][6];
int i;
int j;
int z;
int n;
long long b;

void mm(long long arr1[6][6], long long arr2[6][6]) // 행렬의 곱
{
    
    
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n)
        {
            temp[i][j] = 0;
            z = -1;
            while(++z < n)
            {
                temp[i][j] += arr1[i][z] * arr2[z][j];
            }
            temp[i][j] %= 1000;
        }
    }
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n) arr1[i][j] = temp[i][j];
    }
    return;
}

void dc(long long a[6][6]) // 분할정복
{
    while(b > 0)
    {
        if(b % 2) mm(ans, a);
        mm(arr, a);
        b /= 2;
    }
    return;
}

void cin_arr(long long a[6][6]) // 입력
{
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n)
        {
            cin >> a[i][j];
        }
        ans[i][i] = 1;
    }
    return;
}

void cout_arr(long long a[6][6]) // 출력
{
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n) cout << a[i][j] << " ";
        cout << '\n';
    }
    return;
}
int main(void) // 메인
{
    cin >> n >> b;
    cin_arr(arr);
    dc(arr);
    cout_arr(ans);
    return (0);
}