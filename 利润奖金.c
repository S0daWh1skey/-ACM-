//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//

#include <stdio.h>
int main(int argc, char *argv[]) {
    int a;
    printf("请输入利润\n");
    scanf("%d",&a);
    if(a<=100000){
        a=a*0.1;
        printf("%d\n",a);}
    else if(a>100000&&a<=200000){
        a=(a-100000)*0.075+10000;
        printf("%d\n",a);}
    else if (a>200000&&a<=400000){
        a=175000+(a-200000)*0.05;
        printf("%d\n",a);}
    else if(a>400000&&a<=600000){
        a=27500+(a-400000)*0.03;
        printf("%d\n",a);}
    else if (a>600000&&a<=1000000) {
        a=33500+(a-600000)*0.015;
        printf("%d\n",a);
    }
    else if (a>1000000){
        a=39500+(a-1000000)*0.001;
        printf("%d\n",a);
    }
    return 0;
}
