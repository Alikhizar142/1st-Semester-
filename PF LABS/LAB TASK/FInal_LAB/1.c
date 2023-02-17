#include<stdio.h>
float total_over(int n)
{
   int a=n/6;
   int b=n%6;
   printf("a=%d",a);
   printf("b =%d\n",b);
   float ans=a+b*(1.0)/10;
   return ans;
}
int main()
{
    float ans;
    ans=total_over(945);
    printf("%.2f",ans);
    return 0;
}