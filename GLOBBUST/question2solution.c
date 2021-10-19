#include<stdio.h>
int main()
{
  int i,j,k,l;
  int n,temp=0;
  int p=0,m=0;
  int f0=0,f1=1,nf;
  int­ t1=1,t2=1,nt=1;
  int arr[10];
  //printf("enter a number\n");
  scanf("%d",&m);
  for(p=0;p<m;p++)
  {
    //printf("enter %d index value",p);
    scanf("%d",&arr[p]);
  }
  //int arr[20]={9,4,3,5,2,1};
  //scanf("%d",&n);
  for(k=0;k<m;k++)
  {
    n=arr[k];
    f0=0,f1=1,t1=1,t2=1,nt=1;
  for(i=0;i<n-2;i++)
  {
    l=i;
    if(i==1||i==0)
    nf=i;
    else{
    nf=f0+f1;
    f0=f1;
    f1=nf;
    }
        
    nt=t1+2*t2+nf;
    t1=t2;
    t2=nt;
   
  }

    printf("%d ",nt);
    printf("\n");
  }
}
