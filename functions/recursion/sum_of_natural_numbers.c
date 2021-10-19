#include<stdio.h>
int sum(int);
int main()
{
	int i,j,k,l;
	int result;
	int n;
	scanf("%d",&n);
	result=sum(n);
	printf("%d",result);
	return 0;
}
int sum(int n)
{
	if(n!=0)
	return n+sum(n-1);
	else
	return n;
}
