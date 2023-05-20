#include <stdio.h>

void star(int i, int j, int n){

    if(i % 3 == 1 && j % 3 == 1){
        printf(" ");
        return;
    }

    else if(n == 1){
        printf("*");
        return;
    }

    else star(i/3, j/3, n/3);
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = -1;
    while(++i < n){
        int j = -1;
        while(++j < n){
            star(i, j, n);
        }
        printf("\n");
    }
}