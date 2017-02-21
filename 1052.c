#include<stdio.h>
#include<math.h>
int main()
{
    int sum,a,i,l=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=((pow(10,i)-1)/9)*2;
        l=l+sum;
    }
    printf("%d\n",l);
    return 0;
}
