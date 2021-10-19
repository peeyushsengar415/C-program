#include<stdio.h>
int main()
{
	int i,j=0,k;
	int a[20];
	int b[20];
	int count;
	int ss=0;
	int temp=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if((a[i]==a[j] )&& i!=j)
			{
				count++;
			}
		}
		if(i==j)
		printf("%d comes %d times \n",a[i],count);
	}
		
	
	
	
	
}
