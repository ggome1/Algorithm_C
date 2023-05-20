#include <iostream>
#include <queue>

using namespace std;

int N, M, Count;
int count_value[100001];
int visited[100001];

queue<int> que;

int main(void)
{
    cin >> N >> M;

    que.push(N);

    if (N == M)
    {
        cout << '0';
        return (0);
    }
    while (!que.empty())
    {
        int value = que.front();
        que.pop();

        if (value - 1 > -1 && visited[value - 1] == 0)
        {
            que.push(value - 1);
            visited[value - 1] = 1;
            count_value[value - 1] = count_value[value] + 1;
        }

        if (value + 1 <= 100000 && visited[value + 1] == 0)
        {
            que.push(value + 1);
            visited[value + 1] = 1;
            count_value[value + 1] = count_value[value] + 1;
        }

        if (value * 2 <= 100000 && visited[value * 2] == 0)
        {
            que.push(value * 2);
            visited[value * 2] = 1;
            count_value[value * 2] = count_value[value] + 1;
        }

        if (value - 1 == M || value + 1 == M || value * 2 == M)
            break;
    }
    cout << count_value[M];
}