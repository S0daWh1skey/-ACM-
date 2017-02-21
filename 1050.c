#include<stdio.h>
int main(void)
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    i=m>n?n:m;
    while(!(m%i==0&&n%i==0))
    {
        i--;
    }
    printf("%d ",i);
    j=(m>n?m:n);
    while(!(j%m==0&&j%n==0))
    {
        j++;
    }
    printf("%d\n",j);
    return 0;
}