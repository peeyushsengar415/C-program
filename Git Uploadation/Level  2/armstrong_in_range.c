#include<stdio.h>
void main()
{
	int i,j,k,l;
	int n,n1,n2,sum,r,m;
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
	n=i;
	m=n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	if(sum==m)
	printf("%d\t",m);
	}
}
