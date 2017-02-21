#include<stdio.h>
int main (void) {
    int s,u;
    while(scanf("%d",&s)!=EOF) {
        int i=2,k=1;
        u=s;
        printf("%d=",s);
        for(; i<=s;) {
            if(s%i==0) {
                s=s/i;
                k=k*i;
                printf("%d",i);
                if(k!=u) {
                    printf("*");
                }
                if(k==u) {
                    printf("\n");
                }
            } else {
                i=i+1;
            }
        }
    }
}