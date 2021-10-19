//input a[124536];
// sorted array[1,2,3,4,5,6]
// output 2
// no. of element that does not at originol position
#include<stdio.h>
int main()
{
	int i,j,k;
	int a[100];
	int b[100];
	int n;
	int temp=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			printf("%d ",a[i]);
		}		
	}
}
