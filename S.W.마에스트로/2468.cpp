#include <iostream>
#include <string.h>

using namespace std;

int arr[101][101];
int visited[101][101];
int dfs_x[4] = {1, 0, -1, 0};
int dfs_y[4] = {0, 1, 0, -1};
int n, res, ans = 1;

void print(void)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << visited[i][j] << ' ';
        cout << '\n';
    }
}

void dfs(int k, int j, int z)
{
    visited[j][z] = 1;

    for (int i = 0; i < 4; i++)
    {
        if (j + dfs_x[i] < 1 || j + dfs_x[i] > n || z + dfs_y[i] < 1 || z + dfs_y[i] > n)
            continue ;
        if (arr[j + dfs_x[i]][z + dfs_y[i]] > k && visited[j + dfs_x[i]][z + dfs_y[i]] == 0)
            dfs(k, j + dfs_x[i], z + dfs_y[i]);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];
    }


    for (int i = 1; i <= 100; i++)
    {
        res = 0;
        for (int j = 1; j <= n; j++)
            memset(visited[j], 0, sizeof(int) * (n + 1));
        for (int j = 1; j <= n; j++)
        {
            for (int z = 1; z <= n; z++)
            {
                if (arr[j][z] > i && visited[j][z] == 0)
                {
                    res++;
                    dfs(i, j, z);
                }
            }
        }
        ans = max(ans, res);
    }

    cout << ans << '\n';
}