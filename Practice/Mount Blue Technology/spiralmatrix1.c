#include<stdio.h>
int main()
{

    int i,j,n;
    int a[50][50];
    //scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int dir=0;
    int top=0;
    int left=0;
    int down=n-1;
    int right=n-1;
    
    while(top<=down && left<=right)
    {
        if(dir==0)
        {
            for(i=left;i<=right;i++)
            {
                printf("%d ",a[top][i]);
            }
            top=top+1;
        }
        else if(dir==1)
        {
            for(i=top;i<=down;i++)
            {
                printf("%d ",a[i][right]);
            }
            right=right-1;
        }
        else if(dir==2)
        {
            for(i=right;i>=left;i--)
            {
                printf("%d ",a[down][i]);
            }
            down-=1;
        }
        else if(dir==3)
        {
            for(i=down;i>=top;i--)
            {
                printf("%d ",a[i][left]);
            }
            left=left+1;
        }
        dir=(dir+1)%4;
        
    }
   
}
