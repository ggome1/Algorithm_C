#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int map[26][26];
bool visited[26][26];
int save[400];
int x_list[4] = {1, 0, -1, 0};
int y_list[4] = {0, 1, 0, -1};
int total_count;
int each_count;
int N;

void dfs(int x, int y)
{
    if (map[x][y] == 1 && visited[x][y] == 0)
    {
        each_count++;
        visited[x][y] = 1;
        for (int i = 0; i < 4; i++)
        {
            int temp_x;
            int temp_y;

            temp_x = x + x_list[i];
            temp_y = y + y_list[i];

            if (temp_x > 0 && temp_x <= N && temp_y > 0 && temp_y <= N)
                dfs(temp_x, temp_y);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        string str;
        cin >> str;
        for (int j = 1; j <= N; j++)
            map[i][j] = str[j - 1] - '0';
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (map[i][j] == 1 && visited[i][j] == 0)
            {
                each_count = 0;
                total_count++;
                dfs(i, j);
                save[total_count] = each_count;
            }
        }
    }

    sort(save + 1, save + total_count + 1);

    cout << total_count << '\n';

    for (int i = 1; i <= total_count; i++)
        cout << save[i] << '\n';

}