#include <iostream>
#include <algorithm>

using namespace std;

int n, k;

int arr[100001];
int dp[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        dp[arr[i]] += 1;
        for (int j = arr[i] + 1; j <= k; j++)
            dp[j] += dp[j - arr[i]];
    }

    cout << dp[k];
}