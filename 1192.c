#include<stdio.h>
int main() {
    int i,j,m;
    int k;
    scanf("%d",&k);
    for(i=0; i<k; i++) {
        for(m=3; m>i; m--)
            printf(" ");
        for(j=8; j>7-2*i; j--)
            printf("*");
        printf("\n");
    }
    printf("\n");
    return 0;
}