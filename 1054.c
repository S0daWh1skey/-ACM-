#include<stdio.h>
int main ()
{
    int a,b,c; double sum1=0,sum2=0,sum3=0,s;
    double e;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=1;i<=a;i++)
    {
        sum1=sum1+i;
    }
    for(int k=1;k<=b;k++)
    {
        s=k*k;
        sum2+=s;
    }
    for(int q=1;q<=c;q++)
    {
        e=1.0/q;
        sum3=sum3+e;
    }
    printf("%.2lf",sum1+sum2+sum3);
    return 0;
}