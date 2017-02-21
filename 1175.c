#include<stdio.h>
double ctof(int Ctemp)
{
    double FTemp;
    FTemp = 32+(double)Ctemp*9/5;
    return FTemp;
}
int main()
{
    int c;
    double Ftmp;
    for(c=-100;c<=150;)
    {
        Ftmp=ctof(c);
        printf("c=%d->f=%.0f\n",c,Ftmp);
        c=c+5;
    }
    ctof(c);
    return 0;
}