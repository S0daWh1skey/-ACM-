#include<stdio.h>

int main()
{
    double j=1,sum=0;
    int i,n;
    for(i=1;i<=30;i++)
    {
        j=j*i;
        sum=sum+j;
    }
    printf("%.2e\n",sum);
    return 0;
}