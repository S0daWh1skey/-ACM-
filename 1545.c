#include <stdio.h>
int main(void)
{
    int i;
    double max=-100000,min=100000,sum=0,avg,c;
    scanf("%d",&i);
    for(int y=0;y<i;y++)
    {
        scanf("%lf",&c);
        if(max<c)
        {
            max=c;
        }
        if(min>c)
        {
            min=c;
        }
        sum=sum+c;
    }
    avg=sum/i;
    printf("%.2lf\n%.2lf\n%.2lf",max,min,avg);
    return 0;
}