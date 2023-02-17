#include<stdio.h>
int stock(int array[10])
{  int i=0,j,a=0,temp;

  for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if(array[i]<array[j])
   {
     a=array[j]-array[i];
     return a;
     break;
    }
  }
}
}
int main()
{
    int array[10]={44,30,24,32,35,30,40,38,15};
     printf("%d",stock(array));
   
return 0;
}