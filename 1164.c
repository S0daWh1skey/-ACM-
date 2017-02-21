#include<stdio.h>
#include<math.h>
int main(void)
{
    int num,s,sum=0,k;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&s);
        if(s%2==0)
        {
            k=s;
            sum=sum+k;
        }
    }
    printf("%d",sum);
    return 0;
}