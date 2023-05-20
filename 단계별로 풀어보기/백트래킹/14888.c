#include <stdio.h>

int n;
int arr1[12];
int arr2[5];
int min = 1000000001;
int max = -1000000001;

int bt(int x, int sum)
{
    // 종료 조건 - 모든 경우 돌았을 때
    if(x == n - 1)
    {
        if(max < sum) max = sum;
        if(min > sum) min = sum;
    }

    if(arr2[0] > 0) // 해당 연산자의 계산 횟수가 존재할 때
    {
        arr2[0]--; // 횟수 1을 차감한 후
        bt(x + 1, sum + arr1[x + 1]); // 덧셈 하기
        arr2[0]++; // 백트래킹, 횟수 1 다시 추가
    } 
    if(arr2[1] > 0)
    {
        arr2[1]--;
        bt(x + 1, sum - arr1[x + 1]);
        arr2[1]++;
    } 
    if(arr2[2] > 0)
    {
        arr2[2]--;
        bt(x + 1, sum * arr1[x + 1]);
        arr2[2]++;
    } 
    if(arr2[3] > 0)
    {
        arr2[3]--;
        bt(x + 1, sum / arr1[x + 1]);
        arr2[3]++; 
    } 
    
}


int main(void)
{
    int i;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        scanf("%d", &arr1[i]);
    }
    i = -1;
    while(++i < 4) scanf("%d", &arr2[i]);
    bt(0, arr1[0]);

    printf("%d\n%d\n", max, min);
    return (0);
}