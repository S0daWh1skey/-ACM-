#include<stdio.h>
int main()
{
    int a[100];
    int i,n,p=0,q;
    scanf("%d",&n);
    q=n;
    for(i=0;i<n;i++) a[i]=i+1;
    for(i=0;;i++)
    {
        if(i==n) i=0;
        if(a[i]!=0) p++;
        else continue;
        if(p%3==0)
        {a[i]=0;q--;}
        if(q==1) break;
    } 
    for(i=0;i<n;i++) 
        if(a[i]!=0) 
            printf("%d\n",a[i]); 
    return 0;
}