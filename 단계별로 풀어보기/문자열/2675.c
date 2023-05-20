#include <stdio.h>
#include <string.h>
int main()
{
    int n, re;
    char str[21];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %s", &re, str);
        for(int z=0; z<strlen(str); z++){
            for(int j=0; j<re; j++) printf("%c", str[z]);
        }
        printf("\n");
    }
}