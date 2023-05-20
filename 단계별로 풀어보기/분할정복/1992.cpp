#include <iostream>
#include <string>

using namespace std;

string video[65];


void dc(int n, int x, int y)
{   
    char cur;
    int half;
    int i;
    int j;
    half = n / 2;
    cur = video[x][y];
    i = x - 1;
    while(++i < n + x)
    {
        j = y - 1;
        while(++j < n + y)
        {
            if(video[i][j] != cur)
            {
                cout << '(';
                dc(half, x, y);
                dc(half, x, y + half);
                dc(half, x + half, y);
                dc(half, x + half, y + half);
                cout << ')';
                return;
            }
        }
    }
    cout << cur;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int i;
    int j;
    cin >> n;
    i = -1;
    while(++i < n) cin >> video[i];
    dc(n, 0, 0);
    return (0);
}