#include<stdio.h>
int Fact( int n  )
{      int f=1 ,i ;
      for(i=1;i<=n;++i)
        f=f*i;
      return f;
 }
int main()
{
 int n ,  r , NCR , N ;
printf("Enter value of n \n");
scanf("%d",&n);
printf("Enter value of r \n");
scanf("%d",&r);
N=n-r;
NCR=Fact(n)/(Fact(r)*Fact(N));
printf("The NCR of n=%d & r= %d is = %d ", n,r,NCR);

    return 0;
    }