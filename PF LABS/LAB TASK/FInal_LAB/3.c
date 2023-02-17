#include<stdio.h>
int main()
{
    float intrest, loan ,monthly;
    printf("Enter loan amount\n");
    scanf("%f",&loan);
    printf("Enter  amount per month\n");
    scanf("%f",&monthly);
    printf("Enter  intrest rate (percentage)\n");
    scanf("%f",&intrest);
    
    int count=0;
    float intrest_month=intrest*(1.0)/12.0;
    while (1)
    { 
        float first_month=(loan*intrest_month)/100;
        float Principal_amount=monthly-first_month;
        loan=loan-Principal_amount;
        count++;
        if(loan<=0)
        {
            break;
        }
    }
    printf("%d month required to Return loan\n",count);
    return 0;
}