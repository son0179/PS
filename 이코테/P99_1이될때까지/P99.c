#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d",&n,&k);

    int total = 0;

    while(n>1)
    {
        total += (n%k)+1;
        n=n/k;
    }
    printf("%d\n", total);
}