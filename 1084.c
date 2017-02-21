#include <stdio.h>
main()
{
    void input(int *a);
    void sort(int *a);
    void output(int *a);
    int array[10];
    input(array);
    sort(array);
    output(array);
    return 0;
}

void input(int *a)
{
    int i;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
}

void sort(int *a)
{
    int i,max,min,t1=0,t2=0,v;
    max=a[0];
    min=a[0];
    
    for(i=1;i<10;i++)
    {
        if (a[i] < min) { min = a[i]; t1= i;};
        if (a[i] > max) { max = a[i]; t2= i;};
    }
    
    if ( (t1==0) && (t2 == 9)) {}
    else if ( (t1==9) && (t2 ==0)) { a[0]=min; a[9]=max;
    } else if (t2==0) { a[0]=min; a[t1]=a[9]; a[9]=max;
    } else if (t1==9) { a[9]=max; a[t2]=a[0]; a[0]=min;
    } else
    {
        a[t1]=a[0]; a[t2]=a[9]; a[0]=min;a[9]=max;
    };
}

void output(int *a)
{
    int i;
    for(i=0;i<10;i++) printf("%d ", a[i]);
    printf("\n");
}