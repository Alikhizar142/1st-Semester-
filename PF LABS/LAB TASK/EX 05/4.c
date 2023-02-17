#include<stdio.h>
float price(int number_of_pages )
{
    float price;
    float S= 3.0;
    if (number_of_pages<=10)
    price=10*0.2+ S;
    else
    price=5+((number_of_pages-10)*0.10);
    return price;
}
int main()
{
int a ;  
float Total_price ;
printf("Enter number of pages \n");
scanf("%d",&a);
Total_price=price(a);
printf("The total price is %.2f",Total_price);
return 0;
}