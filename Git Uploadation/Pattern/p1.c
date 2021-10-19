#include<stdio.h>
void main()
{
 int i,j,k,n;
 printf("Enter a number \t");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	k=1;
 	for(j=1;j<=2*n-1;j++)
 	{
 		if(j<=2*i-1)
 		{
 			if(j<i)
 			printf("%d",k++);
 			else
 			printf("%d",k--);	
 		}
 		
 	}
 	printf("\n");
 }
}

