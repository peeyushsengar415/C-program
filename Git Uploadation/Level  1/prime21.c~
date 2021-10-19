#include<stdio.h>

int main()
{z
    int i, prime, lim_up, n;
    scanf("%d", &lim_up);
    printf("\nPRIME NUMBERS less than [ %d ] are :: \n\n",lim_up);

    for(n=1; n<lim_up; n++)
    {
        prime = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
            printf(" %d ",n);
    }

    printf("\n");
    return 0;
}


