#include<stdio.h>
void main()
{
	int i=0,j,temp=0;
	char a[50],b[50];
	scanf("%[^\n]s",a);
	while(a[i]!='\0')
	{
		i++;
	}
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("%s",a);
}

