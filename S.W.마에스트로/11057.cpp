#include <iostream>

using namespace std;

int arr[1001][10];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0; i < 10; i++)
        arr[1][i] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i][0] = 1;
        for (int j = 1; j < 10; j++)
            arr[i][j] = (arr[i - 1][j] + arr[i][j - 1]) % 10007;
    } 

    int sum;

    for (int i = 0; i < 10; i++)
        sum += arr[n][i];
    cout << sum % 10007;
}
