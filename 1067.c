#include "stdio.h"
#include "math.h"
void abovezero(double a,double b,double c){
    double x1=-b+sqrt(b*b-4*a*c)/(-2*a);
    double x2=-b-sqrt(b*b-4*a*c)/(-2*a);
    printf("x1=%lf x2=%lf\n",x1,x2);
}
void belowzero(int a,int b,int c)
{
    double real,imar,d;
    d=b*b-4*a*c;
    real = -b*1.0/(2*a);
    imar = sqrt(-d)/(2*a);
    printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n",real,imar,real,imar);
}
void equalzero(int a,int b,int c){
    double x=-b/(2*a);
    printf("x1=%lf x2=%lf\n",x,x);
    
}
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d=b*b-4*a*c;
    if(d>0){
        abovezero(a, b, c);
    }
    if(d<0){
        belowzero(a,b,c);
    }
    if(d==0){
        equalzero(a,b,c);
    }
}