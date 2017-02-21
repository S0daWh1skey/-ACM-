#include<stdio.h>
#include<math.h>
int main(void)
{
    int i;
    double a1,a2,b1,b2,c1,c2,temp;
    double l1,l2,l3;
    scanf("%d",&i);
    for(int a=0;a<i;a++)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
        l1=(b1-a1)*(b1-a1)+(b2-a2)*(b2-a2);
        l2=(c1-a1)*(c1-a1)+(c2-a2)*(c2-a2);
        l3=(b1-c1)*(b1-c1)+(b2-c2)*(b2-c2);
        if(l1>l2)
        {
            temp=l1;
            l1=l2;
            l2=temp;
        }
        if(l1>l3)
        {
            temp=l1;
            l1=l3;
            l3=temp;
        }
        if(l2>l3)
        {
            temp=l2;
            l2=l3;
            l3=temp;
        }
        if(sqrt(l1)+sqrt(l2)>sqrt(l3)&&sqrt(l1)+sqrt(l3)>sqrt(l2)&&sqrt(l3)+sqrt(l2)>sqrt(l1))
        {
            if(l1+l2==l3)
            {
                printf("直角三角形\n");
            }
            else if(l1+l2>l3)
            {
                printf("锐角三角形\n");
            }
            else if(l1+l2<l3)
            {
                printf("钝角三角形\n");
            }
        } 
        else
        {
            printf("无法构成三角形\n"); 
        } 
    }
    return 0;
}