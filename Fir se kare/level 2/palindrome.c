#include<stdio.h>
void main()
{
 int i,j,kl,n,r=0;
 int rev=0;
 printf("enter a integer value");
 scanf("%d",&n);
 	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;	
	}
 printf("%d",rev);
}
