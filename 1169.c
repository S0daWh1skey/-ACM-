#include<stdio.h>
#include<math.h>
int fact(int a)
{int sum=1;
    int i;
    for(i=1;i<=a;i++)
    {sum*=i;}
    return sum;
}
int main()
{
    float e=0,q;
    int m,n;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        q=fact(m);
        e+=1/q;
    }
    printf("%.4f",e);
}