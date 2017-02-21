//
//  main.c
//  string
//
//  Created by albertshepherd on 4/11/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[100],c;int i=0;
    while(scanf("%c",&c)!=EOF&&c!='\n')
    {
        str[i]=c;
        i++;
    }
    for(int k=i-1;k>=0;k--)
    {
        printf("%c",str[k]);
    }
    printf("\n");
    return 0;
}
