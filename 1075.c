#include <stdio.h>
#define swap(a,b,t) t=a;a=b;b=t
int main()
{
    int a,b;
    int t;
    scanf("%d%d",&a,&b);
    swap(a,b,t);
    printf("%d %d\n",a,b);
    return 0;
}