#include<stdio.h>
void main()
{
	int i,j,k,l,n,t1=0,t2=1,nt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		nt=t1+t2;
		t1=t2;
		t2=nt;
		printf("%d\t",nt);
	}
	
}
