 #include<stdio.h>
 int main()
 {
     int matrix[100][100];
     int row,col;
     printf("Enter number of rows \n");
     scanf("%d",&row);
     printf("Enter number of col \n");
     scanf("%d",&col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the value at Index: %d %d    ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }  
        for(int i=0;i<row;i++)
    {     int j=0;
          if(matrix[i][j+1]==0 && matrix[i+1][j+2]==0)
          { 
              printf("Lower triangular matrix \n");
           break;
          }
           else
           {
               printf("Not traiangular \n");
               break;
           }
           
        }
    
    return 0;
 }