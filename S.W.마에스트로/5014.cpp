#include <iostream>
#include <queue>

using namespace std;

int f, s, g, u, d, res = -1, ans = 1000000;
int visited[1000001];
queue<int> q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> f >> s >> g >> u >> d;

    q.push(s);

    while (!q.empty())
    {
        res++;

        int len = q.size();

        for (int i = 0; i < len; i++)
        {
            int first = q.front();
            visited[first] = 1;
            q.pop();

            if (first == g)
            {
                ans = min(ans, res);
                break ;
            }

            if (first + u <= f && visited[first + u] == 0)
            {
                q.push(first + u);
                visited[first + u] = 1;
            }
            if (first - d >= 1 && visited[first - d] == 0)
            {
                q.push(first - d);
                visited[first - d] = 1;
            }
        }
    }

    if (ans == 1000000)
        cout << "use the stairs\n";
    else   
        cout << ans << '\n';
}