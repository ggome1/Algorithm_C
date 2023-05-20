#include <stdio.h>
#include <string.h>
int count = 0;

void cnt(){
    count++;
}
int recursion(const char *s, int l, int r){
    cnt();
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else {
        return recursion(s, l+1, r-1);
    }
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int n;
    scanf("%d", &n);
    char str[1001];
    int re[n];
    int count_arr[n];
    int i = -1;
    while(++i < n)
    {
        scanf("%s", str);
        re[i] = isPalindrome(str);
        count_arr[i] = count;
        count = 0;
    }
    i = -1;
    while(++i < n)
    {
        printf("%d %d\n", re[i], count_arr[i]);
    }
}