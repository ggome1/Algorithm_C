#include <iostream>

using namespace std;

int t, n, m, k, x, y, Count;
int arr[51][51];

void dfs(int x, int y) {
    arr[x][y] = 0;
    if (x + 1 < n && arr[x + 1][y] == 1) dfs(x + 1, y);
    if (x - 1 >= 0 && arr[x - 1][y] == 1) dfs(x - 1, y);
    if (y + 1 < m && arr[x][y + 1] == 1) dfs(x, y + 1);
    if (y - 1 >= 0 && arr[x][y - 1] == 1) dfs(x, y - 1);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
     Count = 0;

        cin >> m >> n >> k;

        for (int j = 0; j < k; j++)
        {
            cin >> y >> x;
            arr[x][y] = 1;
        }

        for (int j = 0; j < n; j++)
        {
            for (int z = 0; z < m; z++)
            {
                if (arr[j][z] == 1)
                {
                    dfs(j, z);
                 Count++;
                }
            }
        }
        cout << Count << '\n';
    }
}