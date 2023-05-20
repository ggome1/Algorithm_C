#include <iostream>

using namespace std;

int dp[201][201];
int n, k;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= k; i++)
    {
        dp[i][1] = i;
        for (int j = 2; j <= n; j++)
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
    }
    cout << dp[k][n] << '\n';    
}
