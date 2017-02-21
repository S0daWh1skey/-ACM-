#include<stdio.h>
int main(){
    int days,number=1;
    scanf("%d",&days);
    for(int i=1;i<days;i++)
    {
        number=(number+1)*2;
    }
    printf("%d",number);
    return 0;
}