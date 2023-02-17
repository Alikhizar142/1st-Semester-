#include <stdio.h>
float Fact(int n)
{
  int f = 1;
  for (int i = 1; i <= n; i++)
  {
    f = f * i;
  }
  return f;
}
float power(int exp, int base)
{
  int p = 1;

  for (int i = 1; i <= exp; i++)
  {
    p = p * base;
  }

  return p;
}
int main()
{
  int n, x;
  float P, F;
  float sum = 0;
  printf("Enter value of n \n");
  scanf("%d", &n);
  printf("Enter value of x \n");
  scanf("%d", &x);

  for (int k = 0; k <= n; k++)
  {
    P = power(k, x);
    F = Fact(k);
    sum = sum + (P / F);
  }
  printf("%.2f", sum);
  return 0;
}