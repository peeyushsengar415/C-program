//WAP TO FIND GIVEN NUMBER IS armstrong or not
// input 0,1,153,370,371,407
//output  yes
// input other numbers
// output no

#include<stdio.h>
void main()
{
	int i=0,j,k,l,sum=0;
	int n,m=0;
	printf("enter a number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		i=n%10;
		sum=sum+i*i*i;
		n=n/10;
	}
	if(sum==m)
	printf("%d=number is armstrong\n",sum);
	else
	printf("not armstrong\n");
	
}
