#include<stdio.h>
int main()
{
    double high; int num;
    double sum,k;
    scanf("%lf%d",&high,&num);
    k=high;
    for(int i=1;i<=num;i++)
    {
        high=high/2;
        
        sum=sum+high*2;
    }
    sum=sum-high*2+k;
    printf("%.2lf %.2lf",high,sum);
    return 0;
}