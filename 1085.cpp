#include<iostream>

using namespace std;

int main()
{
    void move(int *array,int n,int m);  //函数声明
    
    int number[20];   //定义数组长度为20的数组
    
    int i,n,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>number[i];
    }
    cin>>m;
    
    move(number,n,m);   //函数调用
    for(i=0;i<n;i++)  //输出元素
    {
        cout<<number[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}




//这是使循环后移一次，通过m调节后移几次

void move(int *array,int n,int m) //使循环后移一次的函数
{
    int *p,array_end;        //定义一个指针变量p，和一个变量array_end
    
    array_end=*(array+n-1);  //将array中的最后一个元素的值赋给array_end
    
    for(p=array+n-1;p>array;p--)  //从数组最后一个元素开始向前  把前一个元素的值赋给后一个元素
    {
        *p=*(p-1);
    }
    
    *array=array_end;    //将array_end的值赋给第一个元素的值  因为之前将最后一个元素的值赋给了array_end
    
    m--;    // 通过m控制此函数执行几次  从而后移几个数
    
    if(m>0)
    {
        move(array,n,m);  //递归调用，当循环次数m减至为0时，停止调用
    }
    
    
}