#include"stdio.h"
int main() {
    int i,j,t,s[3][3];
    for(i=0; i<3; i++)
        for(j=0; j<3; j++){
            scanf("%d",&s[i][j]);
        }
    for(i=0; i<3; i++)
        for(j=i+1; j<3; j++) {
            t=s[i][j];
            s[i][j]=s[j][i];
            s[j][i]=t;
        }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }
    return 0;
}