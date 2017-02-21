#include <stdio.h>
#define MAXN 100
int booleanisSorted(int a[MAXN],int i){
    i-=1;
    int flag=0;
    for(int k=0;k<i-1;k++){
        if(a[k+1]<a[k])
            flag=1;
    }
    return flag;
}

int main(){
    int a[MAXN];int num,i=6,is=0;
    while(scanf("%d",&num)!=EOF)
    {
        a[i++]=num;
    }
    is=booleanisSorted(a, i);
    if(is){
        printf("NO");
    }
    else if(is==0){
        printf("YES");
    }
    return 0;
}