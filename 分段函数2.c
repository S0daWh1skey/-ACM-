//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int y;
    scanf("%d",&y);
    if(y<1)
    {
        
        printf("%d",y);
    }
    else if (y>=1&&y<=10)
    {
        printf("%d",2*y-1);
    }
    else if (y>=10)
    {
        printf("%d",3*y-11);
    }
    return 0;
}

