#include<stdio.h>
void main()
{
 int i,j,k=0,n;
 printf("enter a value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	k=1;
	for(j=1;j<=2*n-1;j++)
	{
		if(j>=n+1-i && j<=n-1+i && k)
		{
		printf("*");
		k=0;
		}
		else
		{
		printf(" ");
		k=1;
		}
	}
	printf("\n");
 }
}
