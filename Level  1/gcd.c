//WAP TO find GCD of 2 number
// input 24 and 36, 
//output 12

#include<stdio.h>
void main()
{
	int i,j,k,n1,n2;
	int gcd;
	printf("Enter 2 number ");
	scanf("%d%d",&n1,&n2);
	for(i=1;i<=n1;i++)
	{
	 if(n1%i==0&&n2%i==0)
	 {
	 gcd =i;
	 }
	 
	}
	printf("GCD of given number is %d\n",gcd);
}
