#include <stdio.h>  
  
int main()  
{  
    int x,y;  
    char c ;
    printf("Enter the character \n");  
    scanf("%c",&c); 
    printf("Enter the number of rows \n");  
    scanf("%d",&x);  
      for(int i=1;i<=x;++i)  
    {  
        for(int j=1;j<=i;++j)  
        {  
          printf("%c",c);  
        }  
        printf("\n");
    }
        for(int k=x-1;k>=1;--k)  
        {  
           for(int j=1;j<=k;++j)
           {
            printf("%c",c);  
           }
            printf("\n"); 
        }  
    return 0;
}