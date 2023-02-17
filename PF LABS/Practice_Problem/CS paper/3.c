#include <stdio.h>

int main()
{
    int pin=1234;
    int input=0;
    int amount=1000;
    while(pin!=input)
    {
    printf("Enter Your PIN \n");
    scanf("%d",&input);
    if (input==pin)
    {
       
    while(1)
    {   printf("...........MENU..................\n");
        int choice;
       
        printf("1) Balance checking: \n");
        printf("2) Cash withdrawl:   \n");
        printf("3) Cash Deposit:     \n");
        printf("4) Exit:     \n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Your current Balance is \"%d\" \n",amount);
        }
          else if(choice==2)
        {
            printf("Enter the amount you want to withdraw: \n");
            int b=0;
            scanf("%d",&b);
            if(b<amount)
            {
                amount=amount-b;
                printf("Your remaning account balance is %d\n",amount);
            }
            else
            printf("Insufficent amount\n");
        }
        else if (choice==3)
        {
            printf("Enter the amount you want to deposit: \n");
            int a;
            scanf("%d",&a);
            amount=amount+a;
            printf("Your new account balance is %d\n",amount);
        }
        else if(choice==4)
        {
            printf(" \"Thanks you\" ");
            break;
        }
    }
    }
    else
    printf("Incorrect PIN");
    }
    return 0;
}