#include <stdio.h>
#include <string.h>


int main()
{
    char word[101];
    int count=0;
    scanf("%s", word);
    int len = strlen(word);
    int i = -1;
    while(++i < len){
        if(word[i] == 'd'){
            if(word[i+1] == 'z')
                if(word[i+2] == '='){
                    i+=2;
                    count++;
                    continue;
                }
            if(word[i+1] == '-'){
                i++;
                count++;
                continue;
            }
        }
        else if(word[i] == 'c'){
            if(word[i+1] == '='){
                i++;
                count++;
                continue;
            }
            if(word[i+1] == '-'){
                i++;
                count++;
                continue;
            }
        }
        else if(word[i] == 'l'){
            if(word[i+1] == 'j'){
                i++;
                count++;
                continue;
            }
        }
        else if(word[i] == 'n'){
            if(word[i+1] == 'j'){
                i++;
                count++;
                continue;
            }
        }
        else if(word[i] == 's'){
            if(word[i+1] == '='){
                i++;
                count++;
                continue;
            }
        }
        else if(word[i] == 'z'){
            if(word[i+1] == '='){
                i++;
                count++;
                continue;
            }
        }
        count++;
    }
    printf("%d", count);
}