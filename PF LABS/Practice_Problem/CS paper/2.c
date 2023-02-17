#include <stdio.h>

int main() {
  
    int a[100][100];
    int col,row,sum=0;
    printf("Enter number of rows:\n");
    scanf("%d",&row);
    printf("Enter number of columns:\n");
    scanf("%d",&col);
    printf("Enter numbers: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered mtrix is : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("boundary mtrix is : \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {   if(i == 0 || j == 0 || i == col - 1
                || j == col - 1)
            { 
                printf("%d\t",a[i][j]);
               sum=sum+a[i][j];
                
            }
          else
             printf("\t");
        }
        printf("\n");
    }
    printf("The sum of boundary matrix is %d",sum);
    return 0;
}