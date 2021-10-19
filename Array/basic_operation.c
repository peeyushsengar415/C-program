#include<stdio.h>
void main()
{
	int i,j,k,n;
	int a[10];
	int count=0;
	printf("Enter 10 elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n %d",count);
	
}
