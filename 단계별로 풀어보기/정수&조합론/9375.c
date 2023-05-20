#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    int num;
    int i;
    int j;
    int l;
    scanf("%d", &n);
    i = -1;
    while(++i < n)
    {
        char name[21]; // 옷 이름
        char kind[21]; // 옷 종류
        char cloth[31][21]; // 옷 저장 배열
        int day; // 일 수
        int kind_count; // 종류의 개수
        int about_kind_num[21] = {0, }; // 종류마다의 옷 개수
        kind_count = 0;
        day = 1;
        scanf("%d", &num);
        j = -1;
        while(++j < num)
        {
            scanf("%s %s", name, kind);
            int k;
            k = -1;
            while(++k < kind_count)
            {
                if(strcmp(cloth[k], kind) == 0) // 같은 종류가 있다면 종류 마다의 옷 개수 ++
                {
                    about_kind_num[k]++;
                    break;
                }
            }
            if(k == kind_count) // 없다면 종류를 추가한 뒤에 종류의 개수 ++ 후 종류 개수 1개로 설정
            {
                strcpy(cloth[kind_count], kind);
                about_kind_num[kind_count++] = 1;
            }
        }
        l = -1;
        while(++l < kind_count)
        {
            day *= about_kind_num[l] + 1;
        }
        printf("%d\n", day - 1);
    }
    return (0);
}