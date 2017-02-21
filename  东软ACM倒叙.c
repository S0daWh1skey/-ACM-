//
//  main.c
//  DA
//
//  Created by albertshepherd on 4/12/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char a; int i=0,flag=0,e;
    scanf("%d",&e);
    for(int z=0;z<=e;z++)
    {
        char num[101]={'0'};i=0;flag=0;
    while (scanf("%c",&a)!=EOF&&a!='\n')
    {
        
        num[i]=a;
        i++;
    }
    if(num[0]=='-')
    {
        printf("%c",num[0]);
    for(int k=i-1;k>=1;k--)
    {
        if(num[k]!='0')
        {
            flag=1;
        }
        if(flag==1)
        {
            printf("%c",num[k]);
            
        }
    }
        printf("\n");
    }
    else{
        for(int k=i-1;k>=0;k--)
        {
            if(num[k]!='0')
            {
                flag=1;
            }
            if(flag==1)
            {
                printf("%c",num[k]);
                
            }
        }
        printf("\n");
    }
}
    return 0;
}