#include<stdio.h>
void main()
{
	int i,j,k,l,n,s;
	printf("enter value of n and s");
	scanf("%d%d",&n,&s);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",s);
		}
		printf("\n");
		s++;
	}
	s--;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("%d",s);
		}
		printf("\n");
		s--;
	}
}
