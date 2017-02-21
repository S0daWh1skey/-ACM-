#include<stdio.h>

int a,b,c,d,e;
int main()
{
    scanf("%d",&a);
    b=a/1000;
    c=(a%1000)/100;
    d=(a%100)/10;
    e=a%10;
    printf("%d %d %d %d",b,c,d,e);
    return 0;
}
