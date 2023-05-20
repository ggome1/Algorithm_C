#include <iostream>

using namespace std;

int n;
int dp[4][100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[3][1] = 1;

    for (int i = 2; i <= 100000; i++)
    {
        dp[1][i] = (dp[2][i - 1] + dp[3][i - 1]) % 9901;
        dp[2][i] = (dp[1][i - 1] + dp[3][i - 1]) % 9901;
        dp[3][i] = (dp[1][i - 1] + dp[2][i - 1] + dp[3][i - 1]) % 9901;
    }

    cout << (dp[1][n] + dp[2][n] + dp[3][n]) % 9901;
    
}