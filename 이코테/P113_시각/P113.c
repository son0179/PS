#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int time[6]={0};
    
    int result=0;
    int n1 = n/10;
    int n2 = n%10;
    while ( n1==time[0] && n2 >=time[1])
    {
        time[5] ++;
        if(time[5]>9)
        {
            time[5]=0;
            time[4]++;
            if(time[4]>5)
            {
                time[4]=0;
                time[3]++;
                if(time[3]>9)
                {
                    time[3]=0;
                    time[2]++;
                    if(time[2]>5)
                    {
                        time[2]=0;
                        time[1]++;
                        if(time[1]>9)
                        {
                            time[0]++;
                        }

                    }
                }
            }
        }
        for(int i= 0 ; i<6 ; i++)
        {
            if(time[i]==3)
            {
                result++;
                break;
            }
        }
    }

    printf("%d",result);
}