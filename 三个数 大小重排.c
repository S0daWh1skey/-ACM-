//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//


#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a=a>c?a:c;
    a=a>b?a:b;
    printf("%d\n",a);
    return 0;
}