#include <iostream>

using namespace std;

int arr[1000001];
int n;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    arr[2] = 1;
    arr[3] = 1;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 1];
        if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2]);
        if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3]);
        arr[i] += 1;
    }
    cout << arr[n];
}