#include<stdio.h>
int main()
{
int sum=0;
int counter=10;
int N1,N2;

for(int i=1;counter!=0;i++)
{
     N1=i%3;
     N2=i%5;
    
	if(N1==0 && N2==0)
	{
	 sum=sum+i;
	 counter=counter-1;
	}
}

printf("The sum of 10 numbers which are divisible by 3 and 5 is %d.\n",sum);

return 0;

}