#include<stdio.h>
int main()
{
	int  number;
	int count=0;
	printf("Enter a number \n");
	scanf("%d",&number);
	while(number != 0)
	{
		number=number/10;
		count=count+1;
	}
	printf("The digits of number are %d \n",count );
	return 0;
}