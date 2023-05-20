#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    scanf("%s", word);
    for(int i=0; i<26; i++){
        int jud=0;
        for(int j=0; j<strlen(word); j++){
            if(word[j]==i+97){
               printf("%d ", j); 
               jud=1;
               break;
            } 
        }
        if(jud==0) printf("%d ", -1);
    }
}