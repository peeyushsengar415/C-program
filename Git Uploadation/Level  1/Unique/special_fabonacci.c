#include<stdio.h>
void main()
{
	int i,j,k,l;
	int n,temp=0;
	int f0=0,f1=1,nf;
	int t1=1,t2=1,nt;
	scanf("%d",&n);
	for(i=0,j=1;i<n,j<n;i++,j++)
	{
		
		if(i==1||i==0)
		nf=i;
		else{
		nf=f0+f1;
		f0=f1;
		f1=nf;
		}
		//printf("%d ",nf);	
				
		nt=t1+2*t2+nf;
		t1=t2;
		t2=nt;
		
		printf("%d ",nt);
		
	}
		printf("\n");
}
