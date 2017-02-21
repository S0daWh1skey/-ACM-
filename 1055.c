#include<stdio.h>
int main()
{
    int a,b,c,num;
    for(int i=100;i<=999;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%10;
        num=a*a*a+b*b*b+c*c*c;
        if(num==i)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}