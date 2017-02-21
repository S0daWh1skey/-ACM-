//
//  1193.cpp
//  biubiubiu
//
//  Created by albertshepherd on 3/21/16.
//  Copyright © 2016 albertshepherd. All rights reserved.
//
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define N 1005
char s[105];
int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
    {
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%s",s);
            if(flag==0)
            {
                if(strcmp(s,"bowl")==0)
                    printf("%s",s),flag=1;
                else if(strcmp(s,"knife")==0)
                    printf("%s",s),flag=1;
                else if(strcmp(s,"fork")==0)
                    printf("%s",s),flag=1;
                else if(strcmp(s,"chopsticks")==0)
                    printf("%s",s),flag=1;
            }
            else
            {
                if(strcmp(s,"bowl")==0)
                    printf(" %s",s);
                else if(strcmp(s,"knife")==0)
                    printf(" %s",s);
                else if(strcmp(s,"fork")==0)
                    printf(" %s",s);
                else if(strcmp(s,"chopsticks")==0)
                    printf(" %s",s);
            }
        }
        printf("\n");
    }
    return 0;
}
