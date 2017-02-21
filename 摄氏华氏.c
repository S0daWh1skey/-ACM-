//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    
    double H,S;
    scanf("%lf",&H);
    S=5.0/9*(H-32);
    printf("c=%.2lf\n",S);
    return 0;
}