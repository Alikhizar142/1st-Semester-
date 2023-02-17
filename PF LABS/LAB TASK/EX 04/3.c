#include<stdio.h>
int main()
{
	int  n,r , Nr,N1=1,N2=1 ;
	printf("Enter value of n  \n");
	scanf("%d",&n);
    printf("Enter value of r  \n");
	scanf("%d",&r);
    Nr=n-r;
    if (n>0)
    {
      for(int i=1;i<=n;++i)
      {
    
        N1=N1*i;
      }  
        {
            for(int i=1;i<=Nr;i++)
            N2=N2*i;
        }
    
    int result =N1/N2;
    printf("npr for n=%d & r= %d = %d",n,r,result);
    }
    else
    {
       printf("The factorial on negitive number is not possilbe \n");
    }
    return 0;
}