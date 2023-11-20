#include<stdio.h>

int main(){

    int N, M, K;
    int big1 = 0, big2 = 0;

    scanf("%d %d %d",&N,&M,&K);

    for(int i = 0 ; i < N ; i++)
    {
        int temp;
        scanf("%d", &temp);

        if(temp > big1)
        {
            big2 = big1;
            big1 = temp;
        }
        else if(temp >big2)
        {
            big2 = temp;
        }
    }

    int times = 8/(K+1);
    int remain = 8%(K+1);

    printf("%d\n", remain * big1 + times * (big1 * K + big2));

}