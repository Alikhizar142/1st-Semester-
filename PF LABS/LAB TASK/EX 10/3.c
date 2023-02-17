#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int a[10];
    int i, j;
    int num, count;
 
    srand(time(0));
 
    for (i = 0; i < 10; i++) 
    {
        *(a+i) = rand() % 90 ;
        printf("%d \t ", *(a+i));
    
    }
 
    printf("\nEnter a number to search: ");
    scanf("%d", &num);
 
    count = 0;
 
    for (i = 0; i < 10; i++)
    {
        if (*(a+i) == num)
	 {
            count++;
        }
    }
 
    if (count == 0)
	 {
        printf("%d does not exist in array.\n", num);
    }
    else
	 {
        printf("%d exists %d times in array.\n", num, count);
    }
    return 0;
}