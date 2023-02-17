#include <stdio.h>
int findMode(int *arr, int size)
{
    int max = 0,temp=0;
  int mode;

    for (int i = 0; i < size; i++)
    {
        int count = 0 ;

        for (int j = 0; j < size; j++)
        {
            if (*(arr+i) == *(arr+j))
            {
                count++;
            }
        }

        if (count > max)
        {   temp=count;
            max = count;
            mode = *(arr+i);
        }
    }
 if (temp>=max)
 {
    return mode;
 }

 
}
int main()
{
    int arr[10];
   printf("Enter 10 numbers \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mode = findMode(arr, 10);

    printf("The mode is: %d", mode);

    return 0;
}

