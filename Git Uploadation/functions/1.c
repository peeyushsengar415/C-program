
main()
{
add();
isEven();
add();
add();
}

add()
{
int a,b,c;
printf("enter numbers");
scanf("%d%d",&a,&b);
c=a+b;
printd("%d",c);
}

isEven()
{
int a;
scanf("%d",&a);
if(a%2==0)
printf("even");
else
printf("odd");
}
