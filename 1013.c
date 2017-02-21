#include<stdio.h>
int main() {
    long i,j,k,s,t,max,m;
    while(scanf("%ld%ld",&i,&j)==2) { // 防止Output Limit Exceed
        printf("%ld %ld ",i,j); // 先把 i 和 j 输出
        if(i>j) {
            max = i;    // 如果 i 大于 j, 交换他们的位置
            i=j;
            j=max;
        }
        max=0;
        for(k=i; k<=j; k++) {
            s=0;
            t=k;
            while(t!=1) {
                if(t%2==0) {
                    t=t/2;
                    ++s;
                } else {
                    t=(3*t+1);
                    ++s;
                }
            }
            ++s;
            if(s>max) {
                max=s;
            }
        }
        printf("%ld\n",max); // 补充最大值
    }
    return 0;
}