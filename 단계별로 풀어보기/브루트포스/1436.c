#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 665;
    int goal = 0;
    while(goal != n)
    {
        ++i;
        int count;
        count = 0;
        int temp_i = i;
        while(temp_i != 0)
        {
            temp_i /= 10;
            count++;
        }
        int j;
        j = -1;
        temp_i = i;
        while(++j < count)
        {
            if(temp_i % 10 == 6)
            {
                if((temp_i / 10) % 10 == 6)
                {
                    if((temp_i / 100) % 10 == 6)
                    {
                        goal++;
                        break;
                    }
                }
            }
            temp_i /= 10;
        }
    }
    printf("%d", i);
}