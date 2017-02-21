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
    scanf("%d",&a);
    if(a>=90)
        printf("A");
    else if(a<=89&&a>=80)
        printf("B");
    else if(a>=70&&a<=79)
        printf("C");
    else if (a>=60&&a<=69)
        printf("D");
    else
        printf("E");
    return 0;
}

