#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int num,i,n=0,sum=0,k=0,y;
    double avg;
    for(i=0;i<20;i++)
    {
        scanf("%d",&y);
        if(y<0)
        {
            n=n+1;
        }
        else
        {
            k=k+1;
            sum=sum+y;
            avg=sum/(double)k;
        }
    }
    printf("%d\n",n);
    printf("%.2lf",avg);
    return 0;
}