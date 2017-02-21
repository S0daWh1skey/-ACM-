#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
const int maxn = 10000;

int main(){
    int number,question,x,a[maxn],kase=0;
    
    while(scanf("%d%d",&number,&question)==2&&number){
        printf("CASE# %d:\n",++kase);
        for(int i = 0; i <number; i++)
            scanf("%d",&a[i]);
            sort(a,a+number);
            while (question--) {
                scanf("%d",&x);
                int p=lower_bound(a, a+number, x)-a;
                if(a[p]==x)
                    printf("%d found at %d\n",x,p+1);
                else
                    printf("%d not found\n",x);
            }
    }
    return 0;
}