#include <stdio.h>
int mostTouchableLocker(int number_of_lockers, int number_of_students)
{
    int visit, Topen = 0, Tclose = 0;
    int locker = 1, student = 1, touch = 0, touch1 = 0;
    while (locker <= number_of_lockers)
    {

        visit = 0;

        while (student <= number_of_students)
        {

            if (locker % student == 0)
            {

                visit++;
            }
            student++;
        }

        if (visit % 2 == 0)
        {
            Tclose++;
            touch++;
        }
        else
        {
            Topen++;
            touch++;
        }
        locker++;
    }
    return touch;
}
int main()
{

    int student, locker, ans = 0;
    printf("Enter Number of lockers \n");
    scanf("%d", &locker);
    printf("Enter Number of student \n");
    scanf("%d", &student);
    ans = mostTouchableLocker(locker, student);
    printf("%d", ans);
    return 0;
}
