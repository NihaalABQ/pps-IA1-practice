#include <stdio.h>

int input_n()
{
  int n;
  printf("Enter number of values to add\n");
  scanf("%d",&n);
  return n;
}

int sum_n(int n)
{
  int sum=0,i=0;
  for(i=0;i<=n;i++)
  sum+=i;
  return sum;
}

void output(int n, int sum)
{
  int i;
  for(i=1;i<n;i++)
  printf(" %d +",i);
  printf(" %d is %d",n,sum);
}

int main()
{
  int n,s;
  n=input_n();
  s=sum_n(n);
  output(n,s);
}