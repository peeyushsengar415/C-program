#include<stdio.h>
void main()
{
	int i,k,j,l,n1,n2;
	int count=0;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==0)
		printf("%d\t",i);
		
	}
}


