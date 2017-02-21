//
//  1193.cpp
//  biubiubiu
//
//  Created by albertshepherd on 3/21/16.
//  Copyright © 2016 albertshepherd. All rights reserved.
//
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=1000;i++)
    {
        int sum=0,a = 0;
        for(int j=1;j<i;j++)
            if(i%j==0)
            {
                sum=sum+j;//假如找到一个因子就加起来
                a=j;//for循环执行完后a就是最大的那个因子
            }
        if(sum==i)//判断因子之和与i是否相等
        {
            cout<<i<<"=";
            for(int k=1;k<i;k++)
                if(i%k==0)
                {
                    cout<<k;
                    if(k!=a)
                        cout<<'+';//假如这个k不是最大的那个因子则输出+号
                }
            cout<<endl;//每输出完一个就换行
        }
    }
}
