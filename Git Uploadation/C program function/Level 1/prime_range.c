#include<stdio.h>
int prime(int,int);
int main()
{
	int m,n;
	int result=0;
	scanf("%d %d",&m,&n);
	prime(m,n);		
}
int prime(int m,int n)
{
	int flag=0;
	int i,j;
	for(i=m;i<=n;i++)
	{	
		flag=0;
		for(j=2;j<i;j++)
		{	
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d ",i);
	}
}

