#include <stdio.h>

int main()
{
    int d1, d2, d3, prize, max;
    scanf("%d %d %d", &d1, &d2, &d3);
    if(d1==d2 && d2==d3) prize = 10000+d1*1000;
    else if(d1==d2 || d2 == d3) prize = 1000+d2*100;
    else if(d3==d1) prize = 1000+d3*100;
    else{
        max = d1;
        if(d2>max) max = d2;
        if(d3>max) max = d3;
        prize = max*100;
    }
    printf("%d", prize);
}