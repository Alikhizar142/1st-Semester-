#include<stdio.h>
int main()
{

	int a , b ,c  ;

	printf("Enter value of a \n ");
	scanf("%d",&a);
	printf("Enter value of b \n ");
	scanf("%d",&b);
	printf("Enter value of c \n ");
	scanf("%d",&c);
	if(a==b&&a==c)
	{
		printf("The triangle is equiletral \n" );
	}
else if((a!=b&&a!=c)&&(b!=a&&b!=c)&&(c!=a&&c!=b))

	printf("The triangle has 3 unequal sides \n" );
else 
{	
printf("The triangle is isoscale \n ");
}

	return 0;
}