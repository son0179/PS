#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int result = 0;
    for(int i=0 ; i<m ; i++)
    {
        int candidate = 10001;
        for(int j=0 ; j<n ; j++)
        {
            int temp;
            scanf("%d", &temp);
            if(temp < candidate) candidate = temp;
        }

        if(result < candidate) result = candidate;
    }

    printf("%d", result);
}