#include<stdio.h>
int main() {
    int i[10],a=0,b=0,temp,k;
    for(; a<10; a++)
        scanf("%d",&i[a]);
    for(a=0; a<9; a++) {
        k=a;
        for(b=a+1; b<10; b++) {
            if(i[b]<i[k]) {
                k=b;
            }
        }
        if(k!=a) {
            temp=i[a];
            i[a]=i[k];
            i[k]=temp;
        }
    }
    for(a=0; a<10; a++)
        printf("%d\n",i[a]);
    return 0;
}