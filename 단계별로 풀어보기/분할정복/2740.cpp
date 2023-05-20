#include <iostream>

using namespace std;

int arr1[101][101];
int arr2[101][101];
int res[101][101];

int main(void)
{
    int n;
    int m;
    int k;
    int i;
    int j;
    int z;
    
    cin >> n >> m;
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < m) cin >> arr1[i][j];
    }
    cin >> m >> k;
    i = -1;
    while(++i < m)
    {
        j = -1;
        while(++j < k) cin >> arr2[i][j];
    }
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < k)
        {
            z= -1;
            while(++z < m)
            {
                res[i][j] += arr1[i][z] * arr2[z][j];
            }
            cout << res[i][j] << " ";
        }
        cout << '\n';
    }
}