//INPUT 2020,2016,2028
//output leapyear
//input 2013,1993
//output not leap year
#include<stdio.h>
void main()
{	
	int i,j,k,l,n;
	int yr;
	printf("enter a year");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			printf("%d is leap year",yr);
			else
			printf("%d is not leap year",yr);
		}
		else
			printf("%d is leap year",yr);
	}	
	else
	printf("%d is not leap year ",yr);
	
}
