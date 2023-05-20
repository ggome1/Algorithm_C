#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int count[26]={0,};
    int same = 0;
    int jud=0;
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) if(str[i]>='a') str[i]-='a'-'A';
    for(int i = 0; i < len; i++) count[str[i]-'A']++;
    int max = count[0];
    for(int i = 1; i<26; i++){
        if(count[i]>max){
           max = count[i];
           jud = i;
        } 
    }
    for(int i = 0; i<26; i++) if(count[i]==max) same++;
    if(same > 1){
        printf("?");
    }
    else printf("%c", jud+'A');
}