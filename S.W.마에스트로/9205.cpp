#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int t;
int house_x, house_y, festival_x, festival_y;

queue<pair<int, int>> q;
vector<pair<int, int>> v;
int visited[101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;

        cin >> n;
        cin >> house_x >> house_y;
        for (int j = 0; j < n; j++)
        {
            int x, y;

            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        cin >> festival_x >> festival_y;
    }

    q.push(make_pair(house_x, house_y));

    while(!q.empty())
    {
        pair<int, int> first = q.front();
        q.pop();
    }

}
