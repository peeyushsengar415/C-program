//WAP to convert DECIMAL TO BINARY
// input-10
// output -1010
//input -15
// output-1111

#include<stdio.h>
void main()
{
	int i=1,j,k,n;
	int r=0,val=0;
	printf("Enter any decimal value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		val=val+r*i;
		i=i*10;
		n=n/2;
	}
	printf("%d",val);
}
