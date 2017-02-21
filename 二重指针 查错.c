#include "stdio.h"
#include "string.h"
void swap(char **ppa,char **ppb)
{
    char *temp;
    temp=*ppa;
    *ppa=*ppb;
    *ppb=temp;
}

int main()
{
    char a[100],b[100],c[100];
    char *pa,*pb,*pc;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    pa=a;
    pb=b;
    pc=c;
    printf("pa=%p pb=%p pc=%p\n",pa,pb,pc);
    printf("a=%p b=%p c=%p\n",a,b,c);
    printf("%d %d\n",strcmp(a, b),strcmp(pa, pb));
    if(strcmp(pa,pb)>0) swap(&pa,&pb);    //比较a b的大小
    printf("指针方式输出%s %s %s\n",pa,pb,pc);
    printf("字符串方式输出%s %s %s\n",a,b,c);
    printf("pa=%p pb=%p pc=%p\n",pa,pb,pc);
    printf("a=%p b=%p c=%p\n",a,b,c);
    printf("%d %d\n",strcmp(a, c),strcmp(pa, pc));
    if(strcmp(pa,pc)>0) swap(&pa,&pc);    //比较a c的大小
    printf("指针方式输出%s %s %s\n",pa,pb,pc);
    printf("字符串方式输出%s %s %s\n",a,b,c);
    printf("%d %d\n",strcmp(b, c),strcmp(pb, pc));
    printf("pa=%p pb=%p pc=%p\n",pa,pb,pc);
    printf("a=%p b=%p c=%p\n",a,b,c);
    if(strcmp(pb,pc)>0) swap(&pb,&pc);    //比较b c的大小
    printf("指针方式输出%s %s %s\n",pa,pb,pc);
    printf("字符串方式输出%s %s %s\n",a,b,c);
    printf("pa=%p pb=%p pc=%p\n",pa,pb,pc);
    printf("a=%p b=%p c=%p\n",a,b,c);
    
   // printf("%s %s %s\n",pa,pb,pc);
    
}