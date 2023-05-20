#include <iostream>

using namespace std;

int n, res;
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
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }

        if (dp[i] > res)
            res = dp[i];
    }
    
    cout << res << '\n';
}