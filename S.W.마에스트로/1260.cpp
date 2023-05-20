#include <iostream>
#include <queue>

#define MAX 1001

using namespace std;

int map[MAX][MAX];
bool visited[MAX];
int N, M, V;

queue<int> que;

void reset(void)
{
    for (int i = 0; i < MAX; i++)
        visited[i] = 0;
}

void dfs(int start)
{
    cout << start << ' ';
    visited[start] = 1;

    for (int i = 1; i <= N; i++)
    {
        if (map[start][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}

void bfs(int start)
{
    que.push(start);
    cout << start << ' ';
    visited[start] = 1;

    while (!que.empty())
    {
        start = que.front();
        que.pop();

        for (int i = 1; i <= N; i++)
        {
            if (map[start][i] == 1 && visited[i] == 0)
            {
                que.push(i);
                visited[i] = 1;
                cout << i << ' ';
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int x, y;
        
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }

    dfs(V);
    cout << '\n';
    reset();
    bfs(V);
}