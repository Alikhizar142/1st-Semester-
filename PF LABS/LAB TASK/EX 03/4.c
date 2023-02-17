#include<stdio.h>
int main()
{
	int sum, product, divide,subtract;
	int a , b ;
	char c;
	printf("Enter the operation you want to perform (*,+,-,/) \n ");
	scanf("%s",&c);
	printf("Enter value of a \n ");
	scanf("%d",&a);
	printf("Enter value of b \n ");
	scanf("%d",&b);
	if(c=='+')
	{
		sum=a+b;
		printf("%d + %d = %d  \n", a , b , sum );
	}
else if(c=='-')
	{
		subtract=a-b;
		printf("%d - %d = %d  \n", a , b , subtract );
	}
else if(c=='*')
	{
		product=a*b;
		printf("%d * %d = %d  \n", a , b , product );
	}
	else
	{
		divide=a/b;
		printf("%d / %d = %d  \n", a , b , divide  );
	}
	
	return 0;
}