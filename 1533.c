#include <stdio.h>
int main(void){
    
    int x,y,z,s,m,h;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        
        s=13+z;int a=s/60;
        if(s>60)
        {
            s=s%60;
        }
        m=13+y+a;int b=m/60;
        if(m>60)
        {
            m=m%60;
        } 
        h=21+x+b;
        if(h>24)
        {
            h=h%24;
        } 
        printf("%d %d %d\n",h,m,s);
    }
    
    return 0;
}