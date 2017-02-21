#include<stdio.h>
int gongyue(int m,int n)
{
    int r;
    if(m==n) return m;
    else
        while((r=m%n)!=0)
        {
            m=n;
            n=r;
        }
    return n;
}
int gongbei(int m,int n)
{
    if(m==n)  return m;
    else  return m*n/gongyue(m,n);
}
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    i=gongyue(a,b);
    j=gongbei(a,b);
    printf("%d %d",i,j);
    return 0;
}