#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int m,j,a,sum=0;
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a);
            sum=sum+a;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}