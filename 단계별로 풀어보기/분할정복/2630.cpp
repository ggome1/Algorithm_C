#include <iostream>
using namespace std;

int color[129][129];
int tot_w;
int tot_b;

void dc(int n, int x, int y)
{
    int half;
    int i;
    int j;
    int sum;
    half = n / 2;
    sum = 0;
    i = x - 1;
    while(++i < x + n)
    {
        j = y - 1;
        while(++j < y + n)
        {
            sum += color[i][j]; 
        }
    }
    if(sum == 0)
    {
        tot_w++;
        return;
    }
    else if(sum == n * n)
    {
        tot_b++;
        return;
    }
    else
    {
        dc(half, x, y);
        dc(half, x, y + half);
        dc(half, x + half, y);
        dc(half, x + half, y + half);
    }

}

int main(void)
{
    int n;
    int i;
    int j;
    cin >> n;
    i = -1;
    while(++i < n)
    {
        j = -1;
        while(++j < n) cin >> color[i][j];
    }
    dc(n, 0, 0);
    cout << tot_w << '\n' << tot_b << '\n';
    return (0);
}