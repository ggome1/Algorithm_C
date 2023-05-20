#include <iostream>

using namespace std;

int arr[501][501];
int dp[501][501];
int n;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cin >> arr[i][j];
    }

    dp[1][1] = arr[1][1];

    for (int i = 2; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][1] + arr[i][1];
        for (int j = 2; j < i; j++)
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
        dp[i][i] = dp[i - 1][i - 1] + arr[i][i];
    }

    int max_sum = dp[n][1];

    for (int i = 2; i <= n; i++)
        max_sum = max(max_sum, dp[n][i]);
    cout << max_sum;
}