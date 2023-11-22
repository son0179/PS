#include<stdio.h>

int map[1002][1002] = {0};
int n,m, result = 0;
char temp;
int movex[4] = {0,1,0,-1};
int movey[4] = {1,0,-1,0};
int func(int y, int x)
{
    map[y][x] = 0;
    for(int i=0; i < 4 ; i++)
    {
        if(map[y + movey[i]][x + movex[i]])
        {
            func(y + movey[i], x + movex[i]);
        }
    }
}

int main()
{
    scanf("%d %d",&n,&m);

    scanf("%c", &temp);
    for(int i=1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            scanf("%c", &temp);
            map[i][j] = !(temp-'0');
        }
        scanf("%c", &temp);
    }



    for(int i=1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(map[i][j])
            {
                func(i,j);
                result++;
            }
        }
    }

    printf("%d",result);
}