#include<stdio.h>
int main()
{
    int array[3][4];
    int i,j;
    printf("Enter 12 numbers \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int max=array[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(array[i][j]>max)
            {
                max=array[i][j];
            }
        }
    }
    printf("The max element is %d",max);
    return 0;
}