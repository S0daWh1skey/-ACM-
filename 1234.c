#include<stdio.h>
#include<string.h>
int main()
{
    int i,ok;
    char str[10000];
    while(gets(str))
    {
        ok=0;
        for(i=0;i<(strlen(str));i++)
        {
            if((str[i]=='S'||str[i]=='s')&&(str[i+1]=='a'||str[i+1]=='A')&&(str[i+2]=='L'||str[i+2]=='l')&&(str[i+3]=='t'||str[i+3]=='T'))
            {
                ok=1;
                break;
            }
            else
                ok=0;
        }
        if(ok)
            puts(str);
    }
    return 0;
}