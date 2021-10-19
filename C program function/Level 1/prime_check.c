#include<stdio.h>
int prime(int);
int main()
{
	int n;
	int result=0;
	scanf("%d",&n);
	result=prime(n);
	if(result)
	printf("yes\n");
	else
	printf("no\n");
}
int prime(int n)
{
	int flag=0;
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;	
		}
	}
	if(flag==0)
	return 1;
	else
	return 0;
}

