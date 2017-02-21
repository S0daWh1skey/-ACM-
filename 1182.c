#include<stdio.h>
int main()
{
    int c,a,sum=0;
    scanf("%d",&c);
    for (int i=0;i<c;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {sum=sum+a;
        }
    }
    printf("%d",sum);
    return 0;
}