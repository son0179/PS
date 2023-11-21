#include<stdio.h>
int main()
{
    int map[52][52] = {0};
    int moved[52][52] = {0};

    int move[4][2] = { {-1,0} ,  {0,1}, {1,0} , {0,-1}  };

    int n,m,y,x,direction;



    scanf("%d %d",&n, &m);

    scanf("%d %d %d",&y, &x, &direction);


    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            int temp;
            scanf("%d", &temp);
            map[i][j] = !temp;
            
        }
    }


    int result = 1;
    int check = 0;
    y++;
    x++;
    moved[y][x] = 1;
    while(check < 4)
    {
        direction = (direction+3)%4;
        if( map[ y + move[direction][0] ][ x + move[direction][1] ] == 1  &&  moved[ y + move[direction][0] ][ x + move[direction][1] ] == 0 )
        {
            moved[ y + move[direction][0] ][ x + move[direction][1] ] = 1;
            y += move[direction][0] ;
            x += move[direction][1] ;
            result++;
            check = 0;
        }
        else
        {
            check++;
        }

        if( check == 4 && map[ y - move[direction][0] ][ x - move[direction][1] ] == 1 )
        {
            y -= move[direction][0] ;
            x -= move[direction][1] ;
            direction = (direction+1)%4;
            check = 0;
        }
    }

    printf("%d", result);

}