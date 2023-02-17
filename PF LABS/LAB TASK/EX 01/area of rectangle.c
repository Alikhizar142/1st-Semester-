#include<stdio.h>
int main()
{
	float l, w ,Area ;
	printf("Enter legth of rectangle \n");
	scanf("%f",&l);
	printf("Enter width of rectangle \n");
	scanf("%f",&w);
	Area = w * l ;
	printf ("The area of rectangle is %.2f \n",Area);
	return 0;
}
