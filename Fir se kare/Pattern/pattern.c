#include<stdio.h>
void main()
{	
	int i,j,k,l;
	int n=5;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=2*n-1;j++)
		{
			
			if(j<=n-1+i && j>=n+1-i)
			{
				if(j<n)
				{
					printf("%d",k);
					k++;
				}
				else
				{
					printf("%d",k);
					k--;
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
		
}

