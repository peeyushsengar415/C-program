#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter a number \t");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i<=n)
			{
				if(j<=i)
				printf("*");
			}
			else
			{
			if(j<=2*n-i)
				printf("*");
			}
		}
		printf("\n");
	}
	
}
