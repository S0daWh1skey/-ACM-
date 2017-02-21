#include<stdio.h>
int main()
{
    int number,a,b,c;
    for (number=100;number<=999;number++)
    {
        a=number/100;
        b=number%100/10;
        c=number%10;
        if((a*a*a+b*b*b+c*c*c)==number)
        {
            printf("%d\n",number);
        }
    }
    return 0;
}