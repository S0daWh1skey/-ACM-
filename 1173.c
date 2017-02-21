#include "stdio.h"

double mypow(double x,int n){
    double result=1;
    for(int i=1;i<=n;i++){
        result*=x;
    }
    return  result;
}
double fact(int n){
    double mute=1;
    for(int i=1;i<=n;i++)
    {
        mute*=i;
    }
    return mute;
}
int main(){
    double x;int n;double sum;
    scanf("%lf%d",&x,&n);
    sum=x;
    int s=1;
    for(int i=2;i<=n;i++){
        s*=(-1);
        sum+=s*mypow(x,i)/fact(i);
    }
    
    printf("%.4lf\n",sum);
    return 0;
}