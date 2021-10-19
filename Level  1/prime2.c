#include<stdio.h>
void main()
{
	int i,j,n;
	int count=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==0)
		printf("%d ",i);
		
	}
}


