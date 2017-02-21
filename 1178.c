#include<stdio.h>
double fact(int k)
{
    double res = 1.0;
    while (k>=1)
    {
        res *= k;
        k--;
    }
    return res;
}
int main()
{
    double sum=0.0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=1.0/fact(i);
    }
    printf("sum=%.5lf",sum);
    return 0;
}