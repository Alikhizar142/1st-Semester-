#include<stdio.h>
int main()
{
    int a[60];
    int i ,j ,k;
    for( i=0;i<20;i++)
    {
        a[i]=i*i;
       printf("%d \t ",a[i]);
    }
    for (int j=20;j<40;j++)
    {
         a[j]=j*j*j;
        printf(" %d \t",a[j]);
    }
      for (k=40,i=0,j=20;k<60,i<20,j<40;k++,i++,j++)
    {
         a[k]=a[i]+a[j];
        printf(" %d \t",a[k]);
    }

    return 0;
}
