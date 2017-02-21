#include<stdio.h>
int main()
{
    double r,h,C1,Sa,Sb,Va,Vb;
    double pi=3.14;
    scanf("%lf%lf",&r,&h);
    C1=2*pi*r;
    Sa=pi*r*r;
    Sb=4*pi*r*r;
    Va=4.0/3*pi*r*r*r;
    Vb=pi*r*r*h;
    printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf\n",C1,Sa,Sb,Va,Vb);
    return 0;
}#include<stdio.h>
void mystrcat(char a[],char b[])
{
    int i=0,j=0;
    while(a[i++]!='\0');
    i--;
    while(b[j]!='\0') {
        a[i++]=b[j++];
    }
    a[i]='\0';
}
int main() {
    char a[100],b[100];
    gets(a);
    gets(b);
    mystrcat(a,b);
    puts(a);
    return 0;
}