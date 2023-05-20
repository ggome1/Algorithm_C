#include <iostream>
#include <cmath>

#define FIN 2000000000
using namespace std;

long long n;
long long i;
long long ans;
long long input[100001];
long long seg[1000001];


int init(int node, int start, int end)
{
    if(start == end) return seg[node] = start;
    int mid = (start + end) / 2;
    int left_index = init(2 * node, start, mid);
    int right_index = init(2 * node + 1, mid + 1, end);
    return seg[node] = input[left_index] > input[right_index] ? right_index : left_index;
}

int query(int node, int start, int end, int left, int right)
{
    if(end < left || start > right) return FIN; // 범위 밖
    if(start >= left && end <= right) return seg[node]; // 범위가 포함되는 거
    long long mid = (start + end) / 2;
    int left_index = query(2 * node, start, mid, left, right);
    int right_index = query(2 * node + 1, mid + 1, end, left, right);
    if (left_index == FIN) return right_index; // 부분적으로 겹칠 때
	else if (right_index == FIN) return left_index; // 부분적 2
    else return seg[node] = input[left_index] > input[right_index] ? right_index : left_index;
    // 지금 구간이 원하는 구간을 포함할 때
}

void solve(long long left, long long right)
{
    if(left > right) return;
    long long idx = query(1, 0, n - 1, left, right);
    ans = max(ans, (right - left + 1) * input[idx]);
    solve(left, idx - 1);
    solve(idx + 1, right);
    return;
}

int main(void)
{
    while(1)
    {
        ans = 0;
        cin >> n;
        if(!n) break;
        i = -1;
        while(++i < n) cin >> input[i];
        init(1, 0, n - 1);
        solve(0, n - 1);
        cout << ans << '\n';
    }
    return (0);
}