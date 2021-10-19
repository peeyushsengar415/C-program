#include<stdio.h>
void main()
{
	int i,j,l,k=0;
	int n,s;
	printf("Enter the value of n and s\t");
	scanf("%d \t %d",&n,&s);
	s=s-1;
	for(i=1;i<=2*n-1;i++)
	{	
		i<=n?k++:k--;
		i<=n?s++:s--;
	
		for(j=1;j<=n;j++)
		{
			if(j<=k)
			printf("%d",s);
			else
			printf(" ");
		}
		printf("\n");
		
		//printf("%d",s);
	}
	
}
