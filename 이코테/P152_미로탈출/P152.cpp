#include<stdio.h>
#include<queue>
using namespace std;
int graph[202][202] = {0};
int movex[4] = {0,1,0,-1};
int movey[4] = {1,0,-1,0};
int n,m;
queue<pair<int, int>> que;
void bfs(int y, int x)
{
    graph[y][x] = 0;
    for( int i = 0 ; i< 4 ; i++)
    {
        if()
    }
}

int main()
{
    char temp;
    scanf("%d %d",&n,&m);

    scanf("%c", &temp);
    for(int i=1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            scanf("%c", &temp);
            graph[i][j] = !(temp-'0');
        }
        scanf("%c", &temp);
    }

    while(1)
    {

    }

}