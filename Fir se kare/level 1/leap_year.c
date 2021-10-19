//WAP TO FIND WHEATHER GIVEN YEAR IS LEAP YEAR OR NOT
//INPUT 2020,2016,2028
//output leapyear
//input 2013,1993
//output not leap year
#include<stdio.h>
void main()
{
	int i,j,yr;
	printf("enter a year\n");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				printf("leap year\n");
			}
			else
			{
				printf("not a leap year\n");
			}
		}
		else
		{
		printf("leap year\n");
		}
	}
	else
	{
	printf("not a leap year\n");
	}
}
