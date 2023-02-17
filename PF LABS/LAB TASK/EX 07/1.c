#include<stdio.h>
int min(int a[],int n)
{
    int minimum=a[0];
     for(int i=1;i<n;i++)
     {
         if (minimum>a[i])
         minimum=a[i];
     }

     return minimum;
}
int max( int a[],int n)

{
    int maximum=a[0];
    for(int j=1;j<n;j++)
  {
     if (maximum<a[j])
    maximum=a[j];
    }
    return maximum ;
}
int sum(int a[],int n)
{
    int sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
float average(int a[],int n)
{
    float avg=0;
    float sum=a[0];
    for (int i=1;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    return avg;
}
void  reverse(int a[], int n )
{
    int temp;
    int i , j;
    printf("The reverse of array is \n");
    for( i=9;i>=0;i--)
    {
      printf("%d \t",a[i]);
    }
}
void even_odd(int a[],int n)
{
    int even=0, odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        odd++ ;
    }
     printf("\n There are %d even elements \n",even);
    printf("There are %d odd elements \n",odd);
}
int odd(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
int main()
{
    int array[10],n;
    printf("Enter number of elements in array \n");
    scanf("%d",&n);
    printf("Enter elemnts of array \n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    int a=min(array,n);
    printf("1. The minimum value in the array is %d \n ",a);
    int b=max(array,n);
    printf("2. The maximum value in the array is %d \n",b);
    int s=sum(array,n);
    printf("3. The sum of array is %d \n",s);
    float AVG=average(array,n);
    printf("4. The average of the array is %.2f \n",AVG);
    // Last element of array 
    printf("5. The last element of array is %d \n",array[9]);
    // 2nd element of array 
    printf("6. The value at 2nd index is %d \n",array[2]);
     //  reverse of array
     reverse(array,n);
     // even & odd elments count 
     even_odd(array,n);
    // sum off odd 
    int x=odd(array,n);
    printf("The sum of odd array is %d",x);
    return 0 ;
}