#include <stdio.h>
void Pattern1(int n )
{
 
    for ( int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
    }
}
void Pattern2(int n)
{  int i,j;
   for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }
}
void Pattern3(int n)
{ int i,j;
for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
}
void Pattern4(int n)
{   int i,j;
     for (i = 1; i <= n; i++)
    {
        for (j = 5; j > i; j--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        for (j = j - 2; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }

}
void Pattern5(int n)
{ int i,j;
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < (2 * n); j++)
        { 
            if(i + j <= n - 1) 
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void Pattern6(int n)
{ int i,j;
 for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
            {
             if(i==0||i+j==n-1||i==n-1)
              {
                 printf("*");
                  }
                      else
                    {
                        printf(" ");
                    }
                }
           printf("\n");
              }
}
void Pattern7(int n)
{   int i,j;
     for(i = 0; i < n; i++){

          for(j = 0; j < n; j++){
          
            if(i==0 || i==n-1 || j==0 || j==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
   int  n = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("\n...........Pattern 1.................... \n");
     Pattern1(n);
    printf("\n...........Pattern 2.................... \n");
    Pattern2(n);
    printf("\n ...........Pattern 3.................... \n");
    Pattern3(n);
    printf("\n ...........Pattern 4 .................... \n");
     Pattern4(n);
     printf("\n ...........Pattern 5 .................... \n");
      Pattern5(n);
 printf("\n ...........Pattern 6 .........................\n");
      Pattern6(n);
 printf("\n ...........Pattern 7 ........................... \n");
        Pattern7(n);
        return 0;
}

