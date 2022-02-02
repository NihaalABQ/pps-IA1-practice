#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
}

int cmp(int a, int b, int c)
{
  int l;
  if(a>b && a>c)
  l=a;
  else if(b>c)
  l=b;
  else
  l=c;
  return l;
}

void output(int a, int b, int c, int largest)
{
  printf("Largest among %d, %d & %d is %d",a,b,c,largest);
}

int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(a,b,c,l);
}