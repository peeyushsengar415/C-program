#include<stdio.h>
#include<string.h>
void main()
{
int i,j,n;
char s[30];
char s1[30];
scanf("%[^\n]s",s);
strcpy(s1,s);
printf("%s\t%s",s1,s);
}
