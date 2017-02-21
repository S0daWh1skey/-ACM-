#include<stdio.h>
#define N 20
int main(void)
{
    int i,k,j,a[N];
    k=0;
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++) {
        k=i;
        a[k]=a[i];
        for(j=0; j<N; j++) {
            if(k==j) {
                continue;
            } else {
                if(a[k]%a[j]==0) {
                    printf("%d\n",a[k]);
                    break;
                }
            }
            
        }
    }
    return 0;
}