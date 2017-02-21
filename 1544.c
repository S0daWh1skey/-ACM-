#include <stdio.h>
int main(void) {
    int i;
    scanf("%d",&i);
    for(int k=0; k<i; k++) {
        int val; //存放待判断的数据
        int m;
        int sum = 0;
        scanf("%d",&val);
        m = val;
        while (m) {
            sum = sum*10 + m%10;
            m /= 10;
        }
        if (sum == val)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
