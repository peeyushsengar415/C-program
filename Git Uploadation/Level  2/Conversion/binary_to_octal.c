#include<stdio.h>
void main()
{
	int i=1,j,n,sum=0,r=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r*i;
		i=i*2;
		n=n/10;
	}
	//printf("%d\t",sum);
	n=sum;
	sum=0;
	r=0;
	i=1;
	while(n>0)
	{
		r=n%8;
		sum=sum+r*i;
		i=i*10;
		n=n/8;
	}
	printf("%d",sum);
}
