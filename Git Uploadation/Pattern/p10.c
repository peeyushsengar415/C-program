#include<stdio.h>
void main()
{
	int i,j,k,n,p;
	printf("Enter a number\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i*(i/2)+i/2;
		p=i*(i/2)+1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j<=2*i-1)
			{
				if(j%2==0)
				printf("*");
				else
				{
					if(i%2==0)
					printf("%d",k--);
					else
					printf("%d",p++);
				}
			}
		}
		printf("\n");
	}
}
