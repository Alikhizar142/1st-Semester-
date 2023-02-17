#include <stdio.h>  
  
int main()  
{  
    int x,y;  
    printf("Enter the number of rows");  
    scanf("%d",&x);  
    y=x;  
   for(int i=1;i<=x;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=y;k++)  
       {  
           printf("*");  
       }  
       y--;  
     
      printf("\n");  
    }
    printf(".............................................................................................................................................\n");
      y=1;
      for(int i=x;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=y;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        y++;  
    }  
    return 0;  
}  