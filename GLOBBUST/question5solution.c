#include <stdio.h>
#include <math.h>
#define S(a) ((int)(a*log10(2))+1)

int main(void) {
	// your code goes here
int fall, a, b, c, d, e, f, g, h;
for(scanf("%d",&fall); fall--; printf("%d\n",h))
	if((scanf("%d %d",&a,&b))&&(a==b))
		h=7;
	else
		for(c=d=!(e=1); a; h=S(c)+S((c-1))+5+d)
			{
			if((!(f=b/a)||f)&&e)
				{
				if(f==1)
					d^=1;
				else
					e=0;
				}
			c+=f-1;
			g=a;
			a=b%a;
			b=g;
			}
return 0;
}
