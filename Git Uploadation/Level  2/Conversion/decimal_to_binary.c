#include<stdio.h>
int main()
{
	int i=1,sum=0,r=0,n;
	scanf("%d",&n);
	while(n>0)
	{	
		r=n%2;
		sum=sum+r*i;
		i=i*10;
		n=n/2;
		//printf("%d\t",sum);
		
	}
	printf("%d",sum);
}
