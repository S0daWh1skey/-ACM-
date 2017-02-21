#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[100];
    char p2[100];
    scanf("%s",p);
    int i=0,j=0;
    while(p[i]!='\0')
    {
        if (p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u') //这里该是这样的
        { p2[j++]=p[i];
            i++;
            
        }
        else
            i++;
    }
    
    printf("%s",p2);
    return 0;
}