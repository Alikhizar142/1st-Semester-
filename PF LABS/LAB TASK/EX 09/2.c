#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i=0,sum;
    int count[13] = {0};
    srand(time(0));
    while (i<=1000)
    {
      sum = rand()%6 + rand()%6 + 2;
        count[sum]++;
    i++;
    }
    for(i=2;i<=12;i++)
    {
        printf("%d appears %d times\n",i,count[i]);
    }
    return 0;
}
