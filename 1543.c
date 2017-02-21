#include<stdio.h>
int main(void)
{
    int q,a,b,c;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==10&&b==8)
        {
            scanf("%d",&c);
            printf("%o\n",c);
        }
        else	if(a==10&&b==16)
        {
            scanf("%d",&c);
            printf("%X\n",c);
        }
        else	if(a==8&&b==10)
        {
            scanf("%o",&c);
            printf("%d\n",c);
        }
        else	if(a==8&&b==16)
        {
            scanf("%o",&c);
            printf("%X\n",c);
        }
        else	if(a==16&&b==8)
        {
            scanf("%x",&c);
            printf("%o\n",c); 
        } 
        else	if(a==16&&b==10)
        {
            scanf("%x",&c);
            printf("%d\n",c); 
        } 
    } 
    return 0;
}