#include<stdio.h>
int main()
{
    int N,m,i,k;
    scanf("%d",&N);
    for(m=2;m<=N;m++)
    {
        k=1;
        for(i=2;i<m;i++)
        {
            if(m%i==0)
                k=0;
        }
        if(k!=0)
            printf("%d\n",m);
    }
    
    return 0;
}