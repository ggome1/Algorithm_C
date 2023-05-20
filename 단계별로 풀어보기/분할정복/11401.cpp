#include <iostream>

using namespace std;

long long n, k, a, b, half;
long long mod = 1000000007;
long long dc(int n)
{
    if(n == 0) return 1;
    if(n % 2) return b * dc(n - 1) % mod;
    else
    {
        half = dc(n / 2);
        return half * half % mod;
    }
}
int main(void)
{
    int i;
    cin >> n >> k;
    i = n + 1;
    a = 1;
    while(--i >= n - k + 1) a = (a * i) % mod;
    i = k + 1;
    b = 1;
    while(--i >= 1) b = (b * i) % mod;
    b = dc(mod - 2);
    cout << (a * b) % mod << '\n';
    return (0);
}