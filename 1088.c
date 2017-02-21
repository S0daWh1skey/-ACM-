#include<stdio.h>
struct
{int year;
    int month;
    int day;
}tian;
int main()
{int days(int year,int month,int day);
    int s;
    
    scanf("%d %d %d",&tian.year,&tian.month,&tian.day);
    s=days(tian.year,tian.month,tian.day);
    printf("%d",s);
    return 0;
}
int days(int year,int month,int day)
{int i=month,s,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0,leap,j;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                leap=1;
            else
                leap=0;}
        else
            leap=1;}
    else
        leap=0;
    if(leap&&i>2)
    {for(j=1;j<i;j++)
        sum=sum+a[j];
        s=sum+day+1;}
    else
    {for(j=1;j<i;j++)
        sum=sum+a[j];
        s=sum+day;}
    return s;
}