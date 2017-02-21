#include "stdio.h"
int main(){
    int i,money,ok=0;
    scanf("%d",&i);
    for(int p=0;p<i;p++){
        money=0;ok=0;
        scanf("%d",&money);
        if(money<0||money>20000){
            printf("NO\n");
            ok=1;
        }
        else if((money%50)!=0){
            printf("NO\n");
            ok=1;
        }
        else if(ok==0){
            while(money>=2000){
                    money-=2000;
                if(money==0){
                    printf("2000");
                }
                else{
                    printf("2000 ");
                }
                }
            while(money){
                    printf("%d",(money%2000));
                    money=0;
            }
            printf("\n");
        }
    }
}