#include<stdio.h>

int main(void)
{
    int number,a,b,c,number1;
    for(number=100;number<=999;number++)
    {
        a=number/100;
        b=number/10%10;
        c=number%10;
        number1=c*100+b*10+a;
        if(number+number1==1333)
        {
            printf("%d+%d=1333\n",number,number1);
        }
    }
    return 0;
}