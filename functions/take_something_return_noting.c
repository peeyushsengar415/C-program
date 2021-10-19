#include<stdio.h>
void add(int,int);
main()
{
int x,y;

printf("enter 2 numbers");
scanf("%d%d",&x,&y)
add(x,y);//actual arguments :call by value
}

void add(int a,int b)//formal arguments
{
int c;
c=a+b;
printf("%d",c);
}
