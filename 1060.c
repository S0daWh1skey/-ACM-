#include <stdio.h>
#include<math.h>

double cal_sqrt(double a)
{
    double x=1;
    double y=1.0/2*(x+a/x);
    while(fabs(y-x)>1e-5)
    {
        x=y;
        y=1.0/2*(x+a/x);
    }
    return y;
}

int main()
{
    double a;
    scanf("%lf",&a);
    double b=cal_sqrt(a);
    printf("%.3lf",b);
    return 0;
}