#include <iostream>
#include <queue>

using namespace std;

queue<pair<pair<int, int>, int> > q;

int tomato[101][101][101];
bool visited[101][101][101];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
int m, n, h, ans = -1;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> h;

    for (int z = 1; z <= h; z++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> tomato[i][j][z];
                if (tomato[i][j][z] == 1)
                {
                    q.push(make_pair(make_pair(i, j), z));
                    visited[i][j][z] = 1;
                }
                else if (tomato[i][j][z] == -1)
                    visited[i][j][z] = 1;
            }
        }
    }

    while (!q.empty())
    {
        int size = q.size();
        ans++;
        for (int i = 0; i < size; i++)
        {
            pair<pair<int, int>, int> now = q.front();
            q.pop();

            for (int i = 0; i < 6; i++)
            {
                int qx = now.first.second + dx[i];
                int qy = now.first.first + dy[i];
                int qz = now.second + dz[i];

                if ((qx >= 1 && qx <= m) && (qy >= 1 && qy <= n) && (qz >= 1 && qz <= h))
                {
                    if (visited[qy][qx][qz] == 0 && tomato[qy][qx][qz] == 0)
                    {
                        q.push(make_pair(make_pair(qy, qx), qz));
                        visited[qy][qx][qz] = 1;
                    }
                }
            }
        }
    }

    for (int z = 1; z <= h; z++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                if (visited[i][j][z] == 0) return !(cout << "-1" << '\n');
        }
    }
    cout << ans << '\n';
}