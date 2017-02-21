#define s(a,b,c) 0.5*(a+b+c)
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
#include <stdio.h>
#include<math.h>
main()
{int a,b,c;
    float s;
    scanf("%d%d%d",&a,&b,&c);
    s=s(a,b,c);
    printf("%.3f\n",area(s,a,b,c));
}