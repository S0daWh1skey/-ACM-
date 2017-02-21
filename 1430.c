#include<stdio.h>
int main(void) {
    long t,i,j,n,k;
    while(scanf("%ld",&n)!=EOF)
    {
        for(i=1; i<=n; i++) {
            k=1;
            for(j=1; j<i; j++) {
                printf("%ld ",k);
                k=k*(i-j)/j;
            }
            printf("1\n");
        }
        printf("\n");
    }
    return 0;
}