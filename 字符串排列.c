#include "stdio.h"
#include "string.h"
void swap(char **pa,char **pb)
{
    char *temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
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
    if(strcmp(pa,pb)>0) swap(&pa,&pb);
    if(strcmp(pa,pc)>0) swap(&pa,&pc);
    if(strcmp(pb,pc)>0) swap(&pb,&pc);
    
    
    printf("%s %s %s\n",pa,pb,pc);

}