#include <stdio.h>

int main(int argc, char *argv[]) {
    
    double y;
    scanf("%lf",&y);
    if(y<1)
    {
        printf("%.2lf",y);
    }
    else if (y>=1&&y<=10)
    {
        printf("%.2lf",2*y-1);
    }
    else if (y>=10)
    {
        printf("%.2lf",3*y-11);
    }
    return 0;
}