#include<stdio.h>
#include<math.h>
long func(int m) {
    int i,sum=1;
    for(i=1; i<=m; i++)
        sum=sum*i;
    return sum;
}
main() {
    int m,n;
    float x;
    scanf("%d %d",&m,&n);
    x=(float)func(m)/(func(n)*func(m-n));
    printf("%.0f",x);
}