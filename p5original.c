#include <stdio.h>

float input()
{
  float n;
  printf("Enter number to find root\n");
  scanf("%f",&n);
  return n;
}

float my_sqrt(float n)
{
  int sqr,tmp;
  sqr=n/2;
  tmp=0;
  while(sqr != tmp)
  {
    tmp=sqr;
    sqr=(n/tmp+tmp)/2;
  }
  return sqr;
}

void output(float n, float sqrt_result)
{
  printf("Square root of %.2f is %.2f",n,sqrt_result);
}

int main()
{
  float n,s;
  n=input();
  s=my_sqrt(n);
  output(n,s);
}