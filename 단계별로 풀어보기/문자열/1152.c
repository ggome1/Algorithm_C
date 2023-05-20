#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000001];
    int count=0;
    scanf("%[^\n]s", word);
    int len = strlen(word);
    for(int i = 1; i < len-1; i++){
        if(word[i]==' ') count++;
    }
    if(len == 1 && word[0] == ' ') printf("%d", 0);
    else    printf("%d", count+1);
}