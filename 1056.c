#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,Sn,s;
    scanf("%d",&s);
    for(n=2;n<=s;n++)
    {
        a=sqrt(n);
        for(Sn=0,i=1;i<n;i++)
        {if(n%i==0)
            Sn=Sn+i;
        }
        if(Sn==n)
            printf("%d its factors are ",n);
        else
            continue;
        Sn = 0;
        for(i=1;i<n;i++)
        {
            if(n%i==0){
                Sn += i;
                if(Sn == n){
                    printf("%d ", i);
                }else{
                    printf("%d ",i);
                }
            }
        }
        printf("\n");
    }
}