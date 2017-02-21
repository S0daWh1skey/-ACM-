#include<stdio.h>
int main()
{
    long i,x,y,m,n,p;
    
    while(scanf("%d%d",&m,&n)!=EOF){
        if(m > n){
            p = m;
            m = n;
            n = p;
        }
        x=y=0;
        for(i = m; i <= n; i++)
            if(i%2 ==0)
                x+=i*i;
            else
                y+=i*i*i;
        printf("%d %d\n",x,y);
    }
}