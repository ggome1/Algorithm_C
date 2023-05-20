#include <iostream>

using namespace std;

long long a;
long long b;
long long c;
long long result;

long long dc(long long b)
{
    if(b == 1) return a % c;
    result = dc(b / 2);
    if(!(b % 2)) return result * result % c;
    return result * result % c * a % c;
}

int main(void)
{
    int i;
    result = 1;
    cin >> a >> b >> c;
    cout << dc(b);
    return (0);
}