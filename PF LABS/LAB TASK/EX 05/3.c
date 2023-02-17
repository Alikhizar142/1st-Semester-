#include<stdio.h>
void  calculate_attandance(float  classes_attanded , float  total_classes )
{
   float percent=1;
   percent=(classes_attanded/total_classes)*100.0;
   printf("Your attandance is %.2f \n",percent );
  if (percent>=80)
  {
      printf("You are allowed to sit in the exam \n");
  }
  else
  printf(" You are not allowed to sit in the exam \n");

}
int main()
{
  int  a , b ;
  printf("Enter number of classes attended: \n");
  scanf("%d",&b);
  printf("Enter number of total classes: \n");
  scanf("%d",&a);

  calculate_attandance(b,a);
   return 0;
}