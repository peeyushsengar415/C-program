#include<stdio.h>
void main()
{
	int i,j,l;
	int  a[50],b[50];
	int m,n;
	int count=0,k;
	printf("enter no. of element both array");
	scanf("%d%d",&m,&n);
	printf("1st array");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("2nd array");
	for(j=0;j<n;j++)
	{	
		scanf("%d",&b[j]);
	}
	if(m!=n)
	{
		printf("array are not same");
	}
	else
	{
	for(k=0;k<m;k++)
		{
			if(a[k]==b[k])
			count++;
		}
		if(count!=m && count!=n)
		printf("not same");
		else
		printf("same");
	}
		
}
