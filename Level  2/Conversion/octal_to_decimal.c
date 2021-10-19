#include<stdio.h>
int main()
{
	int i=1,j,k,r=0,sum=0,n;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r*i;
		i=i*8;
		n=n/10;
		 
	}
	printf("%d",sum);
}
