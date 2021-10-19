#include<stdio.h>
int main()
{
unsigned int i=0,j,k,n,d;
//long int n,d;
int a[100000];
//scanf("",&n);
scanf("%d%d",&n,&d);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int temp=0;


for(i=0;i<d;i++)
//while(i!=d)
{    
    temp=a[0];
    for(j=1;j<n;j++)
    {
        a[j-1]=a[j];
    }
    a[j-1]=temp;
    
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
