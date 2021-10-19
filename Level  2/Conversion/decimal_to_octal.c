#include<stdio.h>
int main()
{
	int i=1,j,k,n,r=0,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%8;
		sum=sum+r*i;
		i=i*10;
		n=n/8;
	}
	printf("%d",sum);
}

