#include <stdio.h>
#include <stdbool.h>

bool isused1[40];
bool isused2[40];
bool isused3[40];
int cnt;
int n;

void bt(int cur)
{
    int i;
    if(cur == n)
    {
        cnt++;
        return;
    }
    i = -1;
    while(++i < n)
    {
        if(isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1]) continue;
        isused1[i] = 1;
        isused2[i + cur] = 1;
        isused3[cur - i + n - 1] = 1;
        bt(cur + 1);
        isused1[i] = 0;
        isused2[i + cur] = 0;
        isused3[cur - i + n - 1] = 0;
    }
}

int main(void)
{
    scanf("%d", &n);
    bt(0);
    printf("%d\n", cnt);
}