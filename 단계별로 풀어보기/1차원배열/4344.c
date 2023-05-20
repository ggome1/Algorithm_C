#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float res[n];
    
    for(int i=0; i<n; i++){
        int how;
        float sum=0;
        scanf("%d", &how);
        float stu[how], count=0;

        for(int j=0; j<how; j++){
            scanf("%f", &stu[j]);
            sum += stu[j];
        }
        
        for(int j=0; j<how; j++){
            if(stu[j]>sum/how) count++;
        }
        res[i] = count/how*100;
    }
    for(int i=0; i<n; i++) printf("%.3f%%\n", res[i]);
}