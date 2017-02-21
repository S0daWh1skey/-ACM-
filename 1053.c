#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    long long j=1,sum=0;
    int i,n;
    for(i=1;i<=num;i++)
    {
        j=j*i;
        sum=sum+j;
    }
    printf("%lld",sum);
    return 0;
}