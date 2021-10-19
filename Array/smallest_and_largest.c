#include<stdio.h>
void main()
{
	int i,j,k,l,n;
	int a[50];
	int small=0;
	int largest=0;
	printf("enter a element\t");
	scanf("%d",&n);
	printf("enter %d element of array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	largest=a[0];
	for(i=1;i<n;i++)
	{
		if(small >a[i])
		small=a[i];
		if(largest<a[i])
		largest=a[i];
	}	
	printf("smallest elemnt of array is \n%d\n",small);
	printf("largest elemnt of array is %d",largest);
}
