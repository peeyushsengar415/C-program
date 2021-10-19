#include<stdio.h>
void main()
{
	int i,j,k,n;
	int a[50];
	int large,sec_large;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	sec_large=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		large=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(sec_large<a[i] && large>a[i])
		{
		sec_large=a[i];
		}
	}
	printf("second largest  =%d",sec_large);
}
