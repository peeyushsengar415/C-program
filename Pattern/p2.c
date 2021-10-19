#include<stdio.h>
void main()
{
 int i,j,n;
 char k;
 printf("Enter a number \t");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	k='A';
 	for(j=1;j<=2*n-1;j++)
 	{
 		if(j<=2*i-1)
 		{
 			if(j<i)
 			printf("%c",k++);
 			else
 			printf("%c",k--);	
 		}
 		
 	}
 	printf("\n");
 }
}

