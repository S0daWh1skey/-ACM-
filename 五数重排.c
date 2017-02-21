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
    if(a/10000>0)
    {
        printf("5\n");
        printf("%d ",a/10000);
        printf("%d ",a%10000/1000);
        printf("%d ",a%1000/100);
        printf("%d ",a%100/10);
        printf("%d\n",a%10);
        printf("%d%d%d%d%d",a%10,a%100/10,a%1000/100,a%10000/1000,a/10000);
    }
    else if(a/1000>0)
    {
        printf("4\n");
        printf("%d ",a/1000);
        printf("%d ",a%1000/100);
        printf("%d ",a%100/10);
        printf("%d\n",a%10);
        printf("%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000);
    }
    else if (a/100>0)
    {
        printf("3\n");
        printf("%d ",a/100);
        printf("%d ",a%100/10);
        printf("%d\n",a%10);
        printf("%d%d%d",a%10,a%100/10,a/100);
    }
    else if (a/10>0)
    {
        printf("2\n");
        printf("%d ",a/10);
        printf("%d\n",a%10);
        printf("%d%d",a%10,a/10);
    }
    else if ("a<10")
    {
        printf("1\n");
        printf("%d\n",a);
        printf("%d",a);
    }
    return 0;
}