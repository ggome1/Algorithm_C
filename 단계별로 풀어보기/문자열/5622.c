#include <stdio.h>
#include <string.h>
int main()
{
    char word[16];
    int how = 0;
    scanf("%s", word);
    int len = strlen(word);
    int i = -1;
    while(++i < len){
        if(word[i] <= 'C') how+=1;
        else if(word[i] <= 'F') how +=2;
        else if(word[i] <= 'I') how +=3;
        else if(word[i] <= 'L') how +=4;
        else if(word[i] <= 'O') how +=5;
        else if(word[i] <= 'S') how +=6;
        else if(word[i] <= 'V') how +=7;
        else if(word[i] <= 'Z') how +=8;
        else how +=9;
    }
    printf("%d", how+2*len);
}