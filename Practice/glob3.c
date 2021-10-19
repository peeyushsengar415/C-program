#include<stdio.h>
int main()
{
	int n,m;
	int kl=0,x=0;
	printf("enter no. of apples they both have \n");
	scanf("%d\n",&n);
	printf("enter no. of apples Klauidia has");
	scanf("%d",&m);
	x=(n-m)/2;
	kl=m+x;
	printf("%d",kl);
	
}
