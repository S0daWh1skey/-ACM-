#include<stdio.h>
#include<math.h>
int main(void)
{
    double num;
    scanf("%lf",&num);
    if(num<0)
    {
        printf("%.2lf",-num);
    }
    if(num>=0&&num<2)
    {
        printf("%.2lf",pow((num+1),1.0/2));
    }
    if(num>=2&&num<4)
    {
        printf("%.2lf",pow((num+2),5));
    }
    if(num>=4)
    {
        printf("%.2lf",2*num+5);
    }
    return 0;
}