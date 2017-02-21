#include<stdio.h>

#define Max(x,y,z)  (x)>(y) && (x)>(z) ? (x) : ((y)>(z)? (y) : (z))
float my_max(float,float,float);

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.3f\n",my_max(a,b,c));
    printf("%.3f",Max(a,b,c));
    return 0;
}
float my_max(float x,float y,float z)
{
    float max_num;
    max_num = x>y && x>z ? x : (y>z ? y : z);
    return max_num;
}