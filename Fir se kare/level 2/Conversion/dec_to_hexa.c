#include<stdio.h>
void main()
{
	int i=0,j=0,n,k,r=0,l;
	char a[50];
	printf("Enter a decimal value\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		
		r=n%16;
		n=n/16;
		if(r<10)
		{a[i]=48+r; i++;}
		else
		{ a[i]=55+r; i++;
		}
		
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	printf("\n");
	
}
