#include <iostream>
#include <string.h>

using namespace std;

int arr[301][301];
int temp_arr[301][301];
int dfs_x[4] = {1, 0, -1, 0};
int dfs_y[4] = {0, 1, 0, -1};
int visited[301][301];
int n, m, res, ans = -1;

void copy(void)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            arr[i][j] = temp_arr[i][j];
    }
}

void dfs(int i, int j)
{
    visited[i][j] = 1;

    for (int k = 0; k < 4; k++)
    {
        int new_i = i + dfs_x[k];
        int new_j = j + dfs_y[k];

        if (new_i < 1 || new_i > n || new_j < 1 || new_j > m)
            continue ;
        if (arr[i][j] != 0 && visited[new_i][new_j] == 0)
            dfs(new_i, new_j);
        if (temp_arr[i][j] != 0 && arr[new_i][new_j] == 0)
            temp_arr[i][j]--;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            temp_arr[i][j] = arr[i][j];
        }
    }
    do
    {
        for (int j = 1; j <= n; j++)
            memset(visited[j], 0, sizeof(int) * (m + 1));
        res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (visited[i][j] == 0)
                {
                    if (arr[i][j] != 0)
                        res++;
                    dfs(i, j);
                }
            }
        }
        copy();
        ans++;
    }while(res != 0 && res == 1);
    
    if (res == 0)
        cout << '0' << '\n';
    else
        cout << ans << '\n';
}