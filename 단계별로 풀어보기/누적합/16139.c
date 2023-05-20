#include <stdio.h>
#include <string.h>

char str[200001];
int prefix[200001][27];

int main(void)
{
    int n;
    int i;
    int j;
    char want;
    int first;
    int last;
    int len;
    scanf("%s", str);
    scanf("%d", &n);
    len = strlen(str);
    i = -1;
    while(++i < len)
    {
        prefix[i][str[i] - 'a']++;
    }
    i = 0;
    while(++i < len)
    {
        j = -1;
        while(++j < 26)
        {
            prefix[i][j] += prefix[i - 1][j];
        }
    }
    while(n--)
    {
        scanf(" %c %d %d", &want, &first, &last);
        if(first == 0) printf("%d\n", prefix[last][want - 'a']);
        else printf("%d\n", prefix[last][want - 'a'] - prefix[first - 1][want - 'a']);
    }
    return (0);
}