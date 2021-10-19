#include<stdio.h>
void main()
{
	int i,k,j,l;
	int n,m;
	int a[50];
	int temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
