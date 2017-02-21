#include "stdio.h"
#define MAXN 120
void sort(int*a,int x){
    int temp;
    for(int i=0;i<=x;i++)
        for(int j=0;j<x;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
}

void sb(int* a,int x){
   for(int i=0;i<x;i++){
       printf("%d ",a[i]);
   }
    printf("%d\n",a[x]);
}

int main(){
    int a,b,number[MAXN]={0};
    while (scanf("%d%d",&a,&b)==2&&a&&b) {
        for(int i=1;i<=a;i++){
            scanf("%d",&number[i]);
        }
                number[0]=b;
        sort(number,a);
        sb(number, a);
    }
    return 0;
}