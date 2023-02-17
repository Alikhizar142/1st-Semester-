#include<stdio.h>
int main()
{
	int number,result;
	printf("Enter a Number for multiplication  table. \n");
	scanf("%d",&number);
	for(int i=1;i<=10;i++)
	{
		result=i*number;
		printf("%d * %d = %d \n",number,i,result);
	}
	return 0;
}