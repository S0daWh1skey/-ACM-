//
//  main.c
//  ACM
//
//  Created by albertshepherd on 3/21/16.
//  Copyright (c) 2016 albertshepherd. All rights reserved.
//

#include <stdio.h>
#define N 100
int main(void) {
    char number[N];
    int i;
    int sum = 0;
    for (int i = 0; i <=N-1; ++i) {
        number[i] = getchar();
    }
    for (int i = 0; i <=N-1; ++i) {
        int a=number[i]-'0';
        sum=sum+a;
    }
    if(sum/9==0)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}