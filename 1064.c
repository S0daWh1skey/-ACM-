#include<stdio.h>
int main()
{
    int a[100]={0};
    int i;
    for(i=0;i<9;i++ )
        scanf("%d",&a[i]);
    int j,temp;
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<9;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
    scanf("%d", &temp );
    for(i=0;i<9;i++ )
    {
        if ( temp < a[i] )
            break;
    }
    for( j=8;j>=i;j-- )
        a[j+1]=a[j] ;
    a[i]=temp;
    for( i=0;i<10;i++ )
        printf("%d\n",a[i]);
    return 0;
}