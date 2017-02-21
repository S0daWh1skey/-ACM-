#include<stdio.h>

int main(void)
{
    int s,a=0,b=0,c=0;
    while(scanf("%d",&s)!=EOF)
    {
        if(s<=0)
        {
            break;
        }
        if(s>85)
        {
            b+=1;
        }
        if(s<=84&&s>=60)
        {
            a+=1;
        }
        if(s<64)
        {
            c+=1;
        }
    }
    printf(">=85:%d\n60-84:%d\n<60:%d",b,a,c);
    return 0;
}