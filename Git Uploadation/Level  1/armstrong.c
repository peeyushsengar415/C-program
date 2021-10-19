#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	int r;
	int sum=0,m;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	sum=sum+r*r*r;
	}
	if(sum==m)
	printf("%d is a armstrong number",m);
	else
	printf("%d is not a armstrong number",m);
}
