//
//  main.cpp
//  123
//
//  Created by albertshepherd on 3/13/16.
//  Copyright © 2016 Chris Tstai. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    getchar();
    int i=0;
    char str[1000];
    while(i<N){
        gets(str);
        puts(str);
        cout<<endl;
        i++;
        
    }
    while(gets(str)){
        if(i==N);
        else
            cout<<endl;
        i++;
        for(int j=0;str[j]!='\0';j++){
            if(str[j]==' '&&str[j+1]!=' '&&str[j+1]!='\0')
            {cout<<endl<<endl;}
            else
                cout<<str[j];
        }
        cout<<endl;
    }
    return 0;
}