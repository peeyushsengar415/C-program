#include<stdio.h>
int main()
{
	int i=1,j,n,r=0,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r*i;
		i=i*2;
		n=n/10;
	}
	printf("%d",sum);
}

