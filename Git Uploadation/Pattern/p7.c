#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter a number \t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=2*n-1;j++)
		{
			if(j<=n-1+i && j>=n+1-i)
			{
				if(j<n)
				printf("%d",k++);
				else
				printf("%d",k--);
			}
			else
			printf(" ");
		}
		
		printf("\n");
		
	}
}
