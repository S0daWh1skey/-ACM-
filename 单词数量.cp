#include <iostream>
#include <cstdio>
#include <cstring>

char word[2000][2000];
char s[1000000];
int main(int argc, char** argv)
{
    while(gets(s),s[0]!='#')
    {
        int t=0,l=0;
        int len=strlen(s);
        int i=0;
        while(i<len)
        {
            if(s[i]==' ')
            {
                while(s[i]==' ')
                    i++;
            }
            else
            {
                while(s[i]!=' '&&s[i]!='\0')
                    word[t][l++]=s[i++];    //将单词存入二维组
                word[t][l]='\0';     //别忘记在单词末尾加上\0
                t++;
                l=0;
            }
        }
        
        /*接下来进行筛选*/
        int count=0;
        int flag=0;
        for(int j=0;j<t;j++)
        {
            flag=0;
            for(int k=0;k<j;k++)
            {
                if(strcmp(word[k],word[j])==0)//如果找出此单词与前面某个单词相同，则不计入单词数
                    flag=1;
            }
            if(flag==0)
                count++;
        }
        
        printf("%d\n",count);
    }
    return 0;
}