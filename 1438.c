#include "stdio.h"
#define MAXN 100
int main(){
    int class,a[MAXN],flag,score;
    double sum,avg;
    while(scanf("%d",&class)!=EOF&&class){
        flag=0;sum=0,avg=0;int number=0;
    for(int i=0;i<class;i++){
        scanf("%d",&score);
        if(score<60){
            flag=1;
        }
        a[i]=score;
        sum+=score;
    }
        avg=sum/class;
        for(int i=0;i<class;i++){
            if(a[i]<avg){
                number+=1;
            }
        }
        printf("%d",number);
        if(flag){
            printf(" NO\n");
            flag=0;
        }
        else
            printf("\n");
    }
}