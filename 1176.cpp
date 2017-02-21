#include<iostream>
using namespace std;
int main()
{
    int a[7][7],max;
    int n,i,j,k,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    max=a[1][1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                k=i;l=j;
            }
        }
    }
    
    cout<<max<<" "<<k<<" "<<l<<endl;
    return 0;
}