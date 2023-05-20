#include <stdio.h>
#include <stdlib.h>

int c1[10][10];
int c2[10][10];
int c3[10][10];
int ar[10][10];

int check()
{
    for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                printf("%d ", ar[i][j]);
            }
            printf("\n");
        }
}

int square(int i, int j)
{
    return (i / 3) * 3 + j / 3;
}

void f(int z)
{
    if(z == 81)
    {
        check();
        exit(0);
    }

    int x = z/9;
    int y = z%9;

    if(!ar[x][y])
    {
        for(int i = 1; i <= 9; i++)
        {
            if(!c1[x][i] && !c2[y][i] && !c3[square(x, y)][i])
            {
                c1[x][i] = 1;
                c2[y][i] = 1;
                c3[square(x, y)][i] = 1;
                ar[x][y] = i;
                f(z + 1);
                printf("reset!!\n");
                ar[x][y] = 0;
                c1[x][i] = 0;
                c2[y][i] = 0;
                c3[square(x, y)][i] = 0;
            }
        }
    }
    else f(z + 1);
}

int main(void)
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &ar[i][j]);
            c1[i][ar[i][j]] = 1;
            c2[j][ar[i][j]] = 1;
            c3[square(i, j)][ar[i][j]] = 1;
        }
    }
    f(0);
    return (0);
}

