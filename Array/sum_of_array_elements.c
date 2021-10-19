#include<stdio.h>
void main()
{
	int i,j,n;
	int a[50];
	int sum=0;
	scanf("%d\t",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
	
	
}
