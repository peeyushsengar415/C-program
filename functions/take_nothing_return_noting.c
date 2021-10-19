#include<stdio.h>

main()
{
void add(void);
add();
}

add()
{
int a,b,c;
printf("enter 2 value");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}
