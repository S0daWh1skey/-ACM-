#include<stdio.h>

int main(){
    int Floor[100],sum=0;
    int times;
    while(scanf("%d",&times)!=EOF&&times!=0){
        sum=0;
        for(int i=0;i<times;i++){
            scanf("%d",&Floor[i]);
        }
        for(int i=0;i<times;i++){
            if(i==0){
                sum+=(Floor[i]-0)*6;
                sum+=5;
            }
            else if(Floor[i]>Floor[i-1]){
                sum+=(Floor[i]-Floor[i-1])*6;
                sum+=5;
            }
            else if(Floor[i]<Floor[i-1]){
                sum+=(Floor[i-1]-Floor[i])*4;
                sum+=5;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}