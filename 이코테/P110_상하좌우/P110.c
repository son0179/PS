#include<stdio.h>

int main()
{
    int move[255][2] = {0};
    int arr[102][102] = {0};
    int n;

    move['L'][0] = -1;
    move['R'][0] = 1;
    move['U'][1] = -1;
    move['D'][1] = 1;

    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++)
    {
        for(int j = 1 ; j <=n ; j++)
        {
            arr[i][j] = 1;
        }
    }

    char plan;
    int curX = 1 , curY = 1;
    while(scanf("%c", &plan) != EOF )
    {
        if(arr[curY + move[plan][1]][curX + move[plan][0]] != 0 )
        {
            curX += move[plan][0];
            curY += move[plan][1];
        }
    }
    printf("%d %d", curY, curX);
}