#include <stdio.h>

int main()
{
    char n1[4], n2[4], temp;
    scanf("%s %s", n1, n2);
    int i = -1;
    temp = n1[2];
    n1[2] = n1[0];
    n1[0] = temp;

    temp = n2[2];
    n2[2] = n2[0];
    n2[0] = temp;


    while(++i < 3){
        if(n1[i] > n2[i]){
            printf("%s", n1); break;
        } 
        else if(n1[i] < n2[i]){
            printf("%s", n2); break;
        } 
    }
}