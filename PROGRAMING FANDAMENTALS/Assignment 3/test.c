#include <stdio.h>
int main()
{

    int studentTotal, lockerTotal, visit, totalOpened = 0, totalClosed = 0;

    printf("Enter number of students");
    scanf("%d", &studentTotal);

    lockerTotal = studentTotal;

    for (int locker = 1; locker <= lockerTotal; locker++)
    { // locker loop

        visit = 0;
        for (int student = 1; student <= studentTotal; student++)
        { // student loop

            if (locker % student == 0)
            {

                visit++;
            }

        } // end of locker loop

        if (visit % 2 == 0)
        {

            totalClosed++;
        }
        else
        {
            totalOpened++;
        }

    } // end of student loop

    if (lockerTotal == totalOpened + totalClosed)
    {
        printf("%d", totalOpened);

        return 0;
    }
}
