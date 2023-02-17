#include<stdio.h>
int LCM(int a, int b)
{
    int max = (a > b) ? a: b;

   for( int i=1;i>a||b;i++)
    {
        if ((max % a == 0) && (max % b == 0)) {
            break;
        }
        ++max;
    }
    return max;
}
int main()
{
    int a, b, Lcm;
    printf(" Enter value of x \n");
    scanf("%d", &a);
    printf(" Enter value of y \n");
    scanf("%d", &b);
    Lcm = LCM(a, b);
    printf("The LCM of %d & %d = %d ", a, b, Lcm);
    return 0;
}