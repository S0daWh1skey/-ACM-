#include<stdio.h>
#define N 100
int main()
{
    char a[N];
    int i,m=0,n=0,b=0,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            m++;
        else if(a[i]>='0'&&a[i]<='9')
            n++;
        else if(a[i]==' ')
            b++;
        else
            c++;
    }
    printf("%d\n",m);
    printf("%d\n",b);
    printf("%d\n",n);
    printf("%d\n",c);
    return 0;
}