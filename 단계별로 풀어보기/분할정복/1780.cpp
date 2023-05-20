#include <iostream>
#include <string>

using namespace std;

int paper[2200][2200];
int zero;
int one;
int minuss;

void dc(int n, int x, int y)
{   
    char cur;
    int trisection;
    int i;
    int j;
    trisection = n / 3;
    cur = paper[x][y];
    i = x - 1;
    while(++i < n + x)
    {
        j = y - 1;
        while(++j < n + y)
        {
            if(paper[i][j] != cur)
            {
                dc(trisection, x, y);
                dc(trisection, x, y + trisection);
                dc(trisection, x, y + (trisection * 2));

                dc(trisection, x + trisection, y);
                dc(trisection, x + trisection, y + trisection);
                dc(trisection, x + trisection, y + (trisection * 2));

                dc(trisection, x + (trisection * 2), y);
                dc(trisection, x + (trisection * 2), y + trisection);
                dc(trisection, x + (trisection * 2), y + (trisection * 2));
                return;
            }
        }
    }
    if(cur == 1) one++;
    else if(cur == 0) zero++;
    else minuss++;
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
    while(++i < n)
    {
        j = -1;
        while(++j < n)
        {
            cin >> paper[i][j];
        }
    }
    dc(n, 0, 0);
    cout << minuss << '\n' << zero << '\n' << one << '\n';
    return (0);
}