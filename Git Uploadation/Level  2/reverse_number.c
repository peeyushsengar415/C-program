#include<stdio.h>
void main()
{
	int i,j,k,l,n,sum=0,r=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("%d",sum);
}
