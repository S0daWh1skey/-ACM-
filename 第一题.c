#include<stdio.h>

int main(){
    int n,k,a[20]={0},p=0,pos;
    long long mut=1,z;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        mut*=i;
    }
    int flag=1;
    while(flag){
        if(mut%10==0)
            mut/=10;
        else
            flag=0;
    }
     z=mut;
    for(int i=0;i<k;i++){
        a[i]=mut%10;
        mut/=10;
    }
    while(z){
        z/=10;
        p++;
    }
    if(k>p)
        pos=p;
    else
        pos=k;
    for(int i=pos-1;i>=0;i--){
        printf("%d",a[i]);
    }
      return 0;
}