#include <stdio.h>

int main()
{
    int     h, m, n;
    scanf("%d %d %d", &h, &m, &n);
    if(n>60){
        h+=n/60;
        n%=60;
    }
    if(m+n>=60){
        m=m+n-60;
        h+=1;
    }
    else m+=n;
        
    
    
    if(h>=24) h-=24;
    printf("%d %d", h, m);

}