#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int divider[2] = {6,10};
    int time[6];

    int result = 0;

    for(int count=0 ; count<(n+1)*60*60 ; count++)
    {
        time[5] = count;
        for(int i=5 ; i> 0 ; i--)
        {
            time[i-1] = time[i]/divider[i%2];
            time[i] = time[i]%divider[i%2];
        }

        for(int i=0 ; i<6 ; i++)
        {
            if(time[i]== 3)
            {
                result++;
                break;
            }
        }
    }

    printf("%d",result);
}