#include<stdio.h>
void main()
{
	int i,j,k,n;
	int count=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		count++;
		
	}
	if(count>0)
	printf("Not Prime");
	else
	printf("Prime");
}
