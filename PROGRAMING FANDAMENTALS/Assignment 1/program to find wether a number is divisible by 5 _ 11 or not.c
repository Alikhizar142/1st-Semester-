#include <stdio.h>
int main()
{
 int a ;
 printf("Enter a Number \n");
scanf("%d",&a);
if(a%5==0)
{ 
    printf("The number you enetred is divisible by 5");
}
else if(a%11==0)
{
    printf("The number you enetred is divisible by 11");
}
else 
printf("The number you entered is not divisible by 5 & 11");
return 0;
}

