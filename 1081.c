#include<stdio.h>
int main(void) {
    char ch1,ch2;
    while(scanf("%c",&ch1)!=EOF&&ch1!='\n')
    {
        if(ch1>='a'&&ch1<'z')
        {
            ch2=ch1+1;
        }
        if(ch1=='z')
        {
            ch2='a';
        }
        else if(ch1<'a'||ch1>'z')
        {
            ch2=ch1;
        }
        printf("%c",ch2);
    }
    return 0;
}