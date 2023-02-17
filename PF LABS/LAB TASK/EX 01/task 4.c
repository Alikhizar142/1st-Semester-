#include<stdio.h>
int main()
{
	float length , width , hight , volume ;
	printf("Enter length \n");
	scanf("%f",&length);
	printf("Enter width \n");
	scanf("%f",&width);
	printf("Enter hight \n");
	scanf("%f",&hight);
	 
	volume = length * width * hight ;
	printf("The area of parallelepiped is %.2f \n",volume);
	return 0 ;

	
}
