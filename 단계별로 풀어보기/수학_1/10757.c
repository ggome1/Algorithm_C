#include <stdio.h>
#include <string.h>

int main()
{
    char a[10001], b[10001];
    int ans[10002];
    scanf("%s %s", a, b);
    int a_len, b_len;
    a_len = strlen(a);
    b_len = strlen(b);
    char temp;
    for(int i=0; i<a_len/2; i++){
        temp = a[i];
        a[i] = a[a_len-i-1];
        a[a_len-i-1] = temp;
    }
    for(int i=0; i<b_len/2; i++){
        temp = b[i];
        b[i] = b[b_len-i-1];
        b[b_len-i-1] = temp;
    }
    int bigger = a_len;
    if(bigger < b_len) bigger = b_len;

    int add = 0;
    int i = 0;
    for(i=0; i<bigger; i++){
        if (a[i] == '\0') a[i] = '0'; 
        if (b[i] == '\0') b[i] = '0';
        int res = (a[i]-'0') + (b[i]-'0') + add;
        if(res >= 10){
            res -= 10;
            add = 1;
        }
        else add = 0;
        ans[i] = res;
    }
    int end;
    if(add){
        ans[i] = add;
        end = i+1;
    } 
    else end = i;

    for(i=end-1; i>=0; i--){
        printf("%d", ans[i]);
    }



}