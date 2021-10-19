#include<stdio.h>
int leap(int);
int main()
{
	int i,j,k,yr;
	int result;
	scanf("%d",&yr);
	result=leap(yr);
	if(result)
	{
		printf("leap year\n");
	}
	else
	{
		printf("not leap year\n");
	}
}
int leap(int yr)
{
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			
		}
		else
		return 1;
		
	}else
	{return 0;}
}
