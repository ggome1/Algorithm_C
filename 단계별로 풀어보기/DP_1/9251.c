#include <stdio.h>
#include <string.h>
#define max(a, b) (a > b ? a : b)

int word[1002][1002];
char w1[1002];
char w2[1002];



int main(void)
{
    int i;
    int j;
    
    scanf("%s %s", w1, w2);
    i = 0;
    while(++i <= strlen(w1))
    {
        j = 0;
        while(++j <= strlen(w2))
        {
            if(w2[j - 1] == w1[i - 1])
            {
                word[i][j] = word[i - 1][j - 1] + 1;
            }
            else
            {
                word[i][j] = max(word[i - 1][j], word[i][j - 1]);
            }
        }
    }
    
    printf("%d\n", word[i - 1][j - 1]);
}