#include <stdio.h>
int is_prime(int x) {
    int i;
    int flag = 0;
    if(x==1) {
        flag = 0;
    }
    for(i=2; i<x; i++) {
        if(x%i==0) {
            break;
        }
    }
    if(i == x) {
        flag = 1;
    }
    return flag;
}

int main() {
    int sum=0,m,n,i;
    scanf("%d%d",&m, &n);
    for(i=m; i <=n; i++) {
        if(is_prime(i)) {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}