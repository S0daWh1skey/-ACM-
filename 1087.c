#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    int k;
    int t=0,i;
    scanf("%d",&k);
    char str[k],string[k];
    scanf("%s",&str);
    n=strlen(str);
    scanf("%d",&m);
    for(i=m-1;i<=n;)
        string[t++]=str[i++];
    puts(string);
    return 0;
}