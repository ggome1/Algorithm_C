#include <iostream>

using namespace std;

int n;
int arr[1001];
int dp[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i], arr[i]);

        for (int j = i + 1; j <= n; j++)
            dp[j] =  max(dp[j], dp[j - i] + arr[i]);
    }
    cout << dp[n];
}