//Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

//Print ten space-separated integers in a single line denoting the frequency of each digit from  to 9
// Input : a11472o5t6
// Output: 0 2 1 0 1 1 1 1 0 0 
//
// Input: 1v88886l256338ar0ekk
// Output: 1 1 1 2 0 1 2 0 5 0 
// Explanation 0
// In the given string:
// 
//
//
#include<stdio.h>
int main()
{
    char num[200];
    int temp;
    int a[10]={0};
    int i=0;
    int k=0;
    int j=0;
    scanf("%s",num);
    while(num[i]!='\0')
    {
    	j=0;
    	if(num[i]>=48&&num[i]<=57)
    	{
    		j=num[i]-48;
    		a[j]++;
    	}
    	i++;
    }
    for(k=0;k<10;k++)
    {
    	printf("%d ",a[k]);
    }
    printf("\n");
}

