#include<stdio.h>
void secondMax(int *arr,int size){
    int max = *arr, secondMax = *arr;
    for(int i = 0; i < size; i++)
    {
        if(*arr > max){
            secondMax = max;
            max = *arr;
        }
        else if(*arr > secondMax){
            secondMax = *arr;
        }
        arr++;
    }
    printf("Second Max: %d\n", secondMax);
}
int main()
{
    int size = 10;
    int arr[10];
    printf("Enter 10  numbers: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", arr+i);
    }
    secondMax(arr, size);
    return 0;
}