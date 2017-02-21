#include "string.h"
#include "stdio.h"

void ex(char ch[], int a)
{
    char ch2[1000]={0};int n=a-1;
    for(int i=0;i<a;i++)
    {
        ch2[n]=ch[i];
        n--;
    }
    strncpy(ch, ch2, a);
}

int main()
{
    char ch[1000];
    scanf("%s",ch);
    ex(ch, strlen(ch));
    printf("%s",ch);
}