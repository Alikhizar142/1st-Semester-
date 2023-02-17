#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void displayMatrix(int matrix[4][4]) 
{ 
	for (int i = 0; i < 4; i++) 
	{ 
		for (int j = 0; j < 4; j++) 
		{
			printf("%d\t", matrix[i][j]); 
		}
		printf("\n"); 
	} 
} 

bool isSymmetrimatrix3(float matrix[4][4]) 
{    int B[4][4];
	for (int i = 0; i < 4; i++) 
	{
	    for (int j = 0; j < 4; j++)
	    {
			B[i][j] = matrix[j][i];
	    }
	}
	if (B==matrix)
	return true; 
	else
	return false; 
} 
int main() 
{ 
	srand(time(0)); 
	float sum=0;
	int matrix1[4][4]; 
	int matrix2[4][4]; 
    float matrix3[4][4]={0};
	
	// Fill matrix1 with random values 
	for (int i = 0; i < 4; i++) 
		for (int j = 0; j < 4; j++) 
			matrix1[i][j] = rand() % 9 + 1; 
			
	// Fill matrix2 with random values 
	for (int i = 0; i < 4; i++) 
		for (int j = 0; j < 4; j++) 
			matrix2[i][j] = rand() % 9 + 1; 
			
	// Replacing the main diagonal elements of the sematrix3ond matrix
	for (int i = 0; i < 4; i++) 
		matrix2[i][i] = matrix1[i][i]; 
	// intializing 3rd matrix
    for(int i=0;i<4;i++)
    {    
		for (int j=0;j<4;j++) 
        {    sum=0;
			if (matrix2[i][j] == matrix2[0][0])
			{
				sum = ((matrix2[0][1]+matrix2[1][1]+matrix2[1][0])/matrix2[0][0]);
				matrix3[0][0]=sum;
			}
			if (matrix2[i][j] == matrix2[0][1]) 
		{
				sum = (((matrix2[0][0]+matrix2[0][2]+matrix2[1][0]+matrix2[1][1]+matrix2[1][2])*(1.0))/matrix2[0][1]);
				matrix3[0][1]=sum;
				
			}

			if (matrix2[i][j] == matrix2[0][2])
		{
				sum = (((matrix2[0][3]+matrix2[0][1]+matrix2[1][1]+matrix2[1][2]+matrix2[1][3])*(1.0))/matrix2[0][2]);
				matrix3[0][2]=sum;
			}

    	if (matrix2[i][j] == matrix2[0][3])
			{
			sum = (((matrix2[0][2]+matrix2[1][3]+matrix2[1][2])*(1.0))/matrix2[0][3]);
				matrix3[0][3]=sum;
			}
			if (matrix2[i][j] == matrix2[1][0])
		{
					sum = (((matrix2[0][0]+matrix2[0][1]+matrix2[1][1]+matrix2[2][1]+matrix2[2][0])*(1.0))/matrix2[1][0]);
				matrix3[1][0]=sum;
			}

			if (matrix2[i][j] == matrix2[1][1]) 
			{
				sum = (((matrix2[0][0]+matrix2[0][1]+matrix2[0][2]+matrix2[1][2]+matrix2[2][2]+matrix2[2][1]+matrix2[2][0]+matrix2[1][0])*(1.0))/matrix2[1][1]);
				matrix3[1][1]=sum;
			}

			if (matrix2[i][j] == matrix2[1][2]) 
			{
				sum = (((matrix2[1][1]+matrix2[0][1]+matrix2[0][2]+matrix2[0][3]+matrix2[1][3]+matrix2[2][1]+matrix2[2][2]+matrix2[2][3])*(1.0))/matrix2[1][2]);
				matrix3[1][2]=sum;
			}

			if (matrix2[i][j] == matrix2[1][3])
			{
			sum = (((matrix2[0][2]+matrix2[0][3]+matrix2[1][2]+matrix2[2][2]+matrix2[2][3])*(1.0))/matrix2[1][3]);
				matrix3[1][3]=sum;
			}

			if (matrix2[i][j] == matrix2[2][0])
			{
			sum = (((matrix2[1][0]+matrix2[1][1]+matrix2[2][1]+matrix2[3][1]+matrix2[3][0])*(1.0))/matrix2[2][0]);
				matrix3[2][0]=sum;
			}

			if (matrix2[i][j] == matrix2[2][1])
			{
				sum = (((matrix2[2][0]+matrix2[1][0]+matrix2[1][1]+matrix2[1][2]+matrix2[2][2]+matrix2[3][2]+matrix2[3][1]+matrix2[3][0])*(1.0))/matrix2[2][1]);
				matrix3[2][1]=sum;
			}

			if (matrix2[i][j] == matrix2[2][2])
			{
			sum = (((matrix2[1][1]+matrix2[1][2]+matrix2[1][3]+matrix2[2][3]+matrix2[2][2]+matrix2[3][1]+matrix2[3][2]+matrix2[3][3])*(1.0))/matrix2[2][2]);
				matrix3[2][2]=sum;
			}

			if (matrix2[i][j] == matrix2[2][3])
			{
					sum = (((matrix2[1][3]+matrix2[1][2]+matrix2[2][2]+matrix2[3][2]+matrix2[3][3])*(1.0))/matrix2[2][3]);
				matrix3[2][3]=sum;
			}
			if (matrix2[i][j] == matrix2[3][0])
			{
				sum = (((matrix2[2][0]+matrix2[2][1]+matrix2[3][1])*(1.0))/matrix2[3][0]);
				matrix3[3][0]=sum;
			}

			if (matrix2[i][j] == matrix2[3][1]) 
			{
				sum = (((matrix2[2][0]+matrix2[2][1]+matrix2[2][2]+matrix2[3][0]+matrix2[3][2])*(1.0))/matrix2[3][1]);
				matrix3[3][1]=sum;
			}

			if (matrix2[i][j] == matrix2[3][2])
			{
			sum = (((matrix2[3][1]+matrix2[3][3]+matrix2[2][1]+matrix2[2][2]+matrix2[2][3])*(1.0))/matrix2[3][2]);
				matrix3[3][2]=sum;
			}

			if (matrix2[i][j] == matrix2[3][3]) {
				sum =(((matrix2[3][2]+matrix2[2][2]+matrix2[2][3])*(1.0))/matrix2[3][3]);
				matrix3[3][3]=sum;
			}
		}
	}
	
	printf("Matrix 1\n"); 
	displayMatrix(matrix1); 
	printf("\nMatrix 2\n"); 
	displayMatrix(matrix2); 
	printf("\n Matrix 3 \n"); 
	for (int i = 0; i < 4; i++) 
	{ 
		for (int j = 0; j < 4; j++) 
		{
			printf("%.2f\t", matrix3[i][j]); 
		}
		printf("\n"); 
	}
		if (isSymmetrimatrix3(matrix3)==true) 
		printf("\nThe matrix 3 is symmetric"); 
	else
		printf("\nThe  matrix  3 is not symmetric");
	
	return 0; 
}
