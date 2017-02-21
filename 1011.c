#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,n,t;
    char str[100];
    gets(str);
    n=strlen(str)-1;
    while(i<n)
    {t=str[i],str[i]=str[n],str[n]=t;
        i++,n--;
    }
    puts(str);
    return 0;
}