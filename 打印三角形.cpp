#include<stdio.h>

int main(void)
{
	int line;
	scanf("%d",&line);
	for(int k=1;k<=line;k++)
	{
		for(int d=1;d<=line-k;d++)
		{
			printf(" ");
		}
		for(int e=0;e<2*k-1;e++)
		{
		    printf("*");
		} 
			printf("\n");
	}
   return 0;
 } 
