// Online C compiler to run C program online
#include <stdio.h>
void friendly_check(int n , int m )
{     int sum1=0,sum2=0;
    // finding divisor of 1st number
    for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             sum1=sum1+i;
         }
     }
     // finding divisor of 2nd number
    for(int i=1;i<=m;i++)
     {
         if(m%i==0)
         {
             sum2=sum2+i;
         }
     }
      //  printf("%d \n",sum1);
    //   printf("%d \n",sum2);
     int a=sum1/n;
   
     int b=sum2/m;
    
     if(a==b)
     {
         printf("The number are friendly pair \n");
     }
     else
      printf("The number are not friendly pair \n");
}
int main()
{
  int num1,num2;
  printf("Enter 1st number \n");
  scanf("%d",&num1);
  printf("Enter 1st number \n");
  scanf("%d",&num2);
  friendly_check(num1,num2);
    return 0;
}