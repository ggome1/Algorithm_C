#include <iostream> 

using namespace std;

int relationship[101][101];
int visited[101];
int n, want_first, want_second, counting, cnt, ans = 100;

void dfs(int start)
{
    if (visited[want_second] == 1)
    {
        ans = min(ans, cnt);
        return ;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if ((relationship[start][i] == 1 || relationship[i][start] == 1) && visited[i] == 0)
        {
            cnt++;
            visited[i] = 1;
            dfs(i);
            cnt--;
            visited[i] = 0;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> want_first >> want_second >> counting;

    for (int i = 0; i < counting; i++)
    {
        int first, second;

        cin >> first >> second;

        relationship[first][second] = 1;
        relationship[second][first] = 1;
    }
    visited[want_first] = 1;
    dfs(want_first);
    if (ans == 100)
        ans = -1;
    cout << ans << '\n';
    
}