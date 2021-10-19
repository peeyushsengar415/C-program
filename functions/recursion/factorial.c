#include<stdio.h>
int fact(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("factorail of %d = %d",n,fact(n));
	return 0;
}

int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
