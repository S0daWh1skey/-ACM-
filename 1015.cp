//
//  1193.cpp
//  biubiubiu
//
//  Created by albertshepherd on 3/21/16.
//  Copyright © 2016 albertshepherd. All rights reserved.
//
#include <iostream>
using namespace std;
int snake[100][100];

int main()
{
    
    for(int i=0; i<100; i++)
    {
        
        snake[i][0] = i*(i+1)/2 + 1;
        
        int initIncrease = i+2;
        for(int j=1; j<100-i; j++)
        {
            snake[i][j] = snake[i][j-1] + initIncrease;
            initIncrease++;
        }
    }
    
    int t;
    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            for(int j=0; j<t-i; j++)
            {
                cout << snake[i][j];
                if(j != t-i-1)
                    cout << ' ';
            }
            cout << endl;
        }
    }  
    return 0;  
}  
