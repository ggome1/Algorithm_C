#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    int count = 0;
    int i = 0;
    int left, right;
    int sum = 0;
    while(1){
        sum+=++i;
        count++;
        if(n<=sum) break;
    }
    if(i%2==0){
            left=1;
            right = i;
    }
    else if(i%2==1){
            left=i;
            right = 1;
    }
        
    for(int j=0; j<n-(sum-i)-1; j++){
        if(i%2==0){
            left++;
            right--;
        }
        else if(i%2==1){
            left--;
            right++;
        }
    }
    
    printf("%d/%d\n", left, right);

}
// 힘들었던 문제예요