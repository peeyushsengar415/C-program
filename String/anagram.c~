#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,l;
	int la=0,lb=0;
	int temp=0;
	int count=0;
	char a[30],b[40];
	printf("enter 1st string");
	scanf("%s",a);
	printf("enter 2nd string");
	scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	//if(la!=lb)
	//printf("not a anagram");
		for(i=0;i<la;i++)
		{
			for(j=i+1;j<la;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}		
			}
		}			
	printf("%s\n",a);
	printf("%s\n",b);
	
	for(i=0;i<la;i++)
	{
		if(a[i]==b[i])
		{
			count++;
		}
	}
	if(count==la)
	{
		printf("string is anagram");
	}
	else
	{
		printf("string are not panagram");
	}
}
