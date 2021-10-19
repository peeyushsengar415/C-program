#include<stdio.h>
void main()
{
	int i=0,j=0,k,l;
	int n;
	char a[30],b[40];
	printf("enter string 1");
	scanf("%[^\n]s",a);
	printf("enter string 2");
	scanf("%s",b);
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		a[i]=b[j];
		j++;
		i++;
		
	}
	b[j]=='\0';
	printf("%s",a);
}
