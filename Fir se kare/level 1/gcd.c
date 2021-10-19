//WAP TO find GCD of 2 number
// input 24 and 36, 
//output 12

#include<stdio.h>
main()
{
	int i,j,k,n,min=0,gcd,m;
	printf("enter 2 number");
	scanf("%d%d",&m,&n);
	min=(m<n)?m:n;
	for(i=1;i<min;i++)
	{
		if(m%i==0&&n%i==0)
		{
		gcd=i;
		}
	}
	printf("gcd of %d and %d=%d",m,n,gcd); 
	
	
}
