#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    int n, count=0;
    scanf("%d", &n);
    int i = -1;
    while(++i < n){
        scanf("%s", word);
        int jud[26]={0, };
        int len = strlen(word);
        int j = -1;
        while(++j < len){
            if(word[j+1] == word[j]) continue;
            else if(jud[word[j]-'a']==0){
                jud[word[j]-'a']++;
                if(j==len-1) count++;
                continue;
            } 
            else break;
        }
    }
    printf("%d", count);
}