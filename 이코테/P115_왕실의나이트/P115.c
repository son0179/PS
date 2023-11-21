#include<stdio.h>
int main()
{
    char x;
    int y;
    int move[8][2] = { {2,1},{-2,1},{2,-1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2} };
    scanf("%c%d",&x,&y);


    int result = 0;
    for(int i=0; i < 8 ; i++)
    {
        if( 'a'<=x+move[i][1] && x+move[i][1]<='h' && 1 <= y+move[i][0] && y+move[i][0] <= 8   ) result++;
        
    }

    printf("%d",result);

}