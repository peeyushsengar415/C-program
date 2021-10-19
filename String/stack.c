#include<stdio.h>
void main()
{
		int i=0,j=0,k,n;
		int val=0;
		int a[5];
		printf("enter a number");
		scanf("%d",&n);
		if(n==1)
		{
			if(i==4)
			{
				printf("Overflow");
			}
			else
			{
				val=0;
				printf("enter push value");
				i++;
				scanf("%d",&val);
				a[i]=val;
			}
		}
		else if(n==2)
		{
			if(i==-1)
			{
				printf("Underflow");
			}
			else
			{
				i--;
			}
		}
		else
		{
			for(j=i;j>=0;i--)
			{
				printf("%d\n",a[i]);
			}
		}
}
