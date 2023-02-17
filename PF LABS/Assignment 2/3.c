#include <stdio.h>
#include <math.h>
int main()
{

	int a, b, c;
	double discrimenent, root1, root2, imaginary_part, real_part;
	printf("Enter cofficent of a,b & c \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > 0 && b > 0 && c > 0)
	{    // finding discrimrnenet 
		discrimenent = b * b - 4 * a * c;
		if (discrimenent > 0)
		{
			//  discrimrnenet is greater than zero
			root1 = (-b + sqrt(discrimenent) / 2 * a);
			root2 = (-b - sqrt(discrimenent) / 2 * a);
			printf("Root 1 is  %.2lf \n", root1);
			printf("Root 2 is  %.2lf \n", root2);
		}
		else if (discrimenent == 0)
		{   //  discrimrnenet is equal to zero
			root1 = root2 = (-b) / (2 * a);
			printf("Root 1 = Root 2 = %.2lf", root1);
		}
		else
		{   //  discrimrnenet is less than zero
			real_part = -b / (2 * a);
			imaginary_part = sqrt(-discrimenent) / (2 * a);
			printf("Root 1 = %.2lf +  %.2lf \n", real_part, imaginary_part);
			printf("Root 2 = %.2lf -  %.2lf \n", real_part, imaginary_part);
		}
	}
	else
		printf("The value can't be zero \n");
	return 0;
}
