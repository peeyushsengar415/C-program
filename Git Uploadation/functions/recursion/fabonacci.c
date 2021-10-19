#include<stdio.h>
int fab(int);
int main()
{
int i,k,j,n,result=0;
scanf("%d",&n);
result=fab(n);
printf("%d",result);
return 0;
}
 int fab(int n)
 {
 	if(n==0||n==1)
 	return n;
 	else
 	return fab(n-1)+fab(n-2);
 }
