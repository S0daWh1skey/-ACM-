//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//
#include <stdio.h>

int main(void) {
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF) {
        printf("%d",a+b);
    }
    return 0;
}