//
//  main.c
//  first
//
//  Created by albertshepherd on 3/8/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//
#include <stdio.h>

#include <math.h>

int main()
{
    int i,n; float x,y;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) {
        
        scanf("%f",&x);
        
        if(x<-2) y=x*x-sin(x);
        else if(x<=2) y=pow(2,x)+x;
        
        else y=sqrt(x*x+x+1);
        
        printf("%.2f\n",y);
        
    }
    return 0;
    
}  
